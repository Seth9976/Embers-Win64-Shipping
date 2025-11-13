// 函数: sub_141dc98e0
// 地址: 0x141dc98e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)

if (rdi != 0)
    void* rax_1 = sub_14247bf70()
    void* rcx = rdi[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        (*(*rdi + 0x398))(rdi, arg2)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_2 = zx.q(data_14401b1a0)
int64_t var_48 = 0
char var_40 = 1
int32_t* rdi_2 = *(ThreadLocalStoragePointer + (rcx_2 << 3)) + 0x14

if (data_143f38df8 s> *rdi_2)
    _Init_thread_header(&data_143f38df8)
    
    if (data_143f38df8 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38df4 = 1
        _Init_thread_footer(&data_143f38df8)

int32_t var_10 = 0
wchar16 const* const var_18 = u"bReplicateMovement"
int32_t var_c = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e00 s> *rdi_2)
    _Init_thread_header(&data_143f38e00)
    
    if (data_143f38e00 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38dfc = 1
        _Init_thread_footer(&data_143f38e00)

int32_t var_10_1 = 8
var_18 = u"Role"
int32_t var_c_1 = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e08 s> *rdi_2)
    _Init_thread_header(&data_143f38e08)
    
    if (data_143f38e08 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e04 = 1
        _Init_thread_footer(&data_143f38e08)

int32_t var_10_2 = 4
var_18 = u"RemoteRole"
int32_t var_c_2 = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e10 s> *rdi_2)
    _Init_thread_header(&data_143f38e10)
    
    if (data_143f38e10 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e0c = 1
        _Init_thread_footer(&data_143f38e10)

int32_t var_10_3 = 7
var_18 = u"Owner"
int32_t var_c_3 = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e18 s> *rdi_2)
    _Init_thread_header(&data_143f38e18)
    
    if (data_143f38e18 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e14 = 1
        _Init_thread_footer(&data_143f38e18)

int32_t var_10_4 = 1
var_18 = u"bHidden"
int32_t var_c_4 = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e20 s> *rdi_2)
    _Init_thread_header(&data_143f38e20)
    
    if (data_143f38e20 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e1c = 1
        _Init_thread_footer(&data_143f38e20)

int32_t var_10_5 = 2
var_18 = u"bTearOff"
int32_t var_c_5 = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e28 s> *rdi_2)
    _Init_thread_header(&data_143f38e28)
    
    if (data_143f38e28 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e24 = 1
        _Init_thread_footer(&data_143f38e28)

int32_t var_10_6 = 3
var_18 = u"bCanBeDamaged"
int32_t var_c_6 = 1
sub_14241d9c0(&var_18, arg2, &var_48)

if (data_143f38e30 s> *rdi_2)
    _Init_thread_header(&data_143f38e30)
    
    if (data_143f38e30 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e2c = 1
        _Init_thread_footer(&data_143f38e30)

int32_t var_10_7 = 9
var_18 = u"Instigator"
int32_t var_c_7 = 1
sub_14241d9c0(&var_18, arg2, &var_48)
bool cond:0 = data_143f38e38 s> *rdi_2
int32_t var_38 = 8
int32_t var_34 = 1
char var_30 = 1

if (cond:0)
    _Init_thread_header(&data_143f38e38)
    
    if (data_143f38e38 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e34 = 1
        _Init_thread_footer(&data_143f38e38)

int32_t var_10_8 = 6
var_18 = u"AttachmentReplication"
int32_t var_c_8 = 1
sub_14241d9c0(&var_18, arg2, &var_38)
bool cond:1 = data_143f38e40 s> *rdi_2
int32_t var_28 = 6
int32_t var_24 = 1
char var_20 = 1

if (cond:1)
    _Init_thread_header(&data_143f38e40)
    
    if (data_143f38e40 == 0xffffffff)
        sub_142452380()
        sub_142452380()
        data_143f38e3c = 1
        _Init_thread_footer(&data_143f38e40)

int32_t var_10_9 = 5
var_18 = u"ReplicatedMovement"
int32_t var_c_9 = 1
return sub_14241d9c0(&var_18, arg2, &var_28)
