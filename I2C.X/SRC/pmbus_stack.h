#ifndef PMBUS_STACK_H
#define PMBUS_STACK_H

/*-----------------------------------------------
    include files
-----------------------------------------------*/


/*-----------------------------------------------
    type_def
-----------------------------------------------*/



#define MasterWritesAddress 0x2
#define MasterWritesData 0x22
#define MasterReadsAddress 0x6
#define MasterReadsData 0x24
/*-----------------------------------------------
    Struct Enum  Uion
-----------------------------------------------*/

/*-----------------------------------------------
   public func
-----------------------------------------------*/
void I2C_Fun(void);
void I2C_slave_handler(void);
void Clear_faults(void);
void HostWritesCommandByte(void);
void HostWritesNextBytes(void);
void HostReadsAddr(void);
void HostReadsData(void);
void TransmissionContentFaultHandler(char token);

extern char Example_APP_func(unsigned char codeCMD);

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __cplusplus
}
#endif

#endif /* TEMPLATE_H */
