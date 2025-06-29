// Connect Dynamo DB with EC2 Instance
// Create a table as Contacts in Dynamo DB 
// Fetch Data Using Node App Deployed on EC2 Instance

sudo yum install -y docker
sudo systemctl start docker
sudo systemctl status docker
sudo service docker start
sudo usermod -aG docker ec2-usermod
sudo docker pull philippaul/node-dynamodb-demo

sudo docker run --rm -d -p 80:3000 --name node-dynamo-app \
-e AWS_REGION=eu-north-1b \
-e AWS_ACCESS_KEY_ID=AKIAQTNEFY2VQSAQIALKResources \
-e AWS_SECRET_ACCESS_KEY=dbqCJU/mT/4pscOpnuGz3i/DTpk36Ts9sZzvIUKo \
philippaul/node-dynamodb-demo

sudo docker ps
