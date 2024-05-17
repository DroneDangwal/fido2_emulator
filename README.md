# FIDO2 Emulator
#### In this simplified version, we have:
* A single service
* Multiple users
* Multiple devices per user
* A pin to unlock each device
* No device sharing

#### Installation:
* Clone the repository.
* Run `make` on the command line.
* Run `./fido2emu` to execute the program.

#### How to use:
* First enter N, the number of users in your universe
* The following N lines shall contain user's ID (a number), D - the number of devices the user has followed by D `device ID, device PIN` pairs.
* Two types of operations are supported in this emulation:
    * **Register** - Enter `R <username> <deviceID>`  to register the user possessing the specified device with the specified username.
    * **Login** - Enter `L <username> <deviceID> <devicePIN>` to log into an account.