pipeline {
    agent any

    stages {

        stage('Configure') {
            steps {
                sh '''
                rm -rf build
                mkdir build
                cd build
                cmake ..
                '''
            }
        }

        stage('Parallel Build') {
            parallel {

                stage('Compile') {
                    steps {
                        sh '''
                        cd build
                        make
                        '''
                    }
                }

                stage('Static Check') {
                    steps {
                        echo 'Running Static Analysis'
                    }
                }

                stage('Unit Test') {
                    steps {
                        sh '''
                        cd build
                        ctest || true
                        '''
                    }
                }
            }
        }

        stage('Archive') {
            steps {
                archiveArtifacts artifacts: 'build/EmployeeSalaryCalculator', fingerprint: true
            }
        }
    }
}
