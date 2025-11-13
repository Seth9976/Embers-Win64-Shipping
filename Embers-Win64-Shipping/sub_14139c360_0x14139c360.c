// 函数: sub_14139c360
// 地址: 0x14139c360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t result_1 = 0
TEB* gsbase

if (data_143ec7040 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec7040)
    
    if (data_143ec7040 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_23 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.Shadow.MinResolution", r8_1)
        int64_t rax_25
        
        if (rax_23 == 0)
            rax_25 = 0
        else
            rax_25 = (*(*rax_23 + 0x58))(rax_23)
        
        data_143ec7038 = rax_25
        _Init_thread_footer(&data_143ec7040)

int32_t rax_4 = *(arg1 + 0x3b8)
int32_t rcx

if (rax_4 s>= 1)
    rcx = data_1439c7a70
    
    if (rax_4 s< rcx)
        rcx = rax_4
else
    rcx = 1

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rcx)
int32_t rax_8 = (temp1 - temp0) s>> 1
int32_t var_28 = rax_8
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_8)
int32_t var_24 = (temp3 - temp2) s>> 1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rcx)
int32_t var_20 = (temp5 + (temp4 & 7)) s>> 3
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rcx)
int32_t var_1c = (temp7 + (temp6 & 0xf)) s>> 4
int64_t rax_21 = 0
int32_t var_18 = *(data_143ec7038 + 4)
uint64_t result

while (true)
    if (arg2 s>= (&var_28)[rax_21])
        result = zx.q(result_1)
        break
    
    result_1 += 1
    rax_21 += 1
    
    if (rax_21 s>= 5)
        result = 0
        break

__security_check_cookie(rax_1 ^ &var_48)
return result
