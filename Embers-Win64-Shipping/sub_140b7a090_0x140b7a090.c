// 函数: sub_140b7a090
// 地址: 0x140b7a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t r9 = 0
int32_t var_2c = 0
int64_t rbx_1 = -1

do
    rbx_1 += 1
while ((*u"Win64")[rbx_1] != 0)

if (rbx_1.d + 1 s> 0)
    sub_1405947f0(&var_38, rbx_1.d + 1)
    r9 = var_2c
    rdx = var_30

int32_t rax_1 = rbx_1.d + 1 + rdx
int32_t var_30_1 = rax_1

if (rax_1 s> r9)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"Win64", (rbx_1.d + 1) * 2)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 4)
int32_t rax_2 = var_40 + 4
var_40 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_48)

sub_1405a7220(var_48, 4, "UE4", 4, 0x3f)
int64_t* rax_3 = sub_140b7c590()
char rax_4 = sub_1405948d0()
char rax_5 = sub_140ab2200()
int64_t rdx_3 = *rax_3
int64_t* arg_8
int32_t result = sub_140b7a2c0(arg2, (*(rdx_3 + 8))(rax_3, rdx_3), &var_48, &var_38, rax_5, rax_4, 
    0, arg1 + 8, arg3, &arg_8)
int64_t rcx_8 = var_48
int64_t* rbx_3
rbx_3.b = result.b == 0

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rbx_3.b == 0)
    result.b = 1
else
    TEB* gsbase
    
    if (data_143db4814
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143db4814)
        
        if (data_143db4814 == 0xffffffff)
            sub_140af2b60()
            data_143db4810 = sub_140b21a10(&data_143dbb3f0, u"UNATTENDED")
            _Init_thread_footer(&data_143db4814)
    
    if (data_143db4810 != 0 || data_143de548d != 0)
        int64_t* rax_8 = arg_8
        int16_t* const r9_2
        
        if (rax_8[1].d == 0)
            r9_2 = &data_142d40450
        else
            r9_2 = *rax_8
        
        sub_140af98a0("Unknown", 0x3b3, 
            This project requires the '%s' plugin. Install it and try again, or remove it from the "
        "project's required plugin list.", r9_2)
        sub_140afbb40()
    
    result.b = 0

return result
