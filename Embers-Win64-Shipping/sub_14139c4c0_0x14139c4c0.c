// 函数: sub_14139c4c0
// 地址: 0x14139c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
TEB* gsbase

if (data_143ec7050 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec7050)
    
    if (data_143ec7050 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_22 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.Shadow.MinResolution", r8_3)
        
        if (rax_22 != 0)
            int64_t rdx_6 = *rax_22
            rax_22 = (*(rdx_6 + 0x58))(rax_22, rdx_6)
        
        data_143ec7048 = rax_22
        _Init_thread_footer(&data_143ec7050)

int32_t rcx = *(arg1 + 0x3b8)
int32_t r9 = 1
int32_t rax_4

if (rcx s>= 1)
    rax_4 = data_1439c7a70
    
    if (rcx s< rax_4)
        rax_4 = rcx
else
    rax_4 = 1

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_4)
int32_t rcx_1 = 1
int32_t r8_2 = 1
int32_t rax_7 = (temp1 - temp0) s>> 1

if (rax_7 s>= 1)
    r8_2 = rax_7

int32_t var_28 = r8_2
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8_2)
int32_t rax_11 = (temp3 - temp2) s>> 1

if (rax_11 s>= 1)
    rcx_1 = rax_11

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8_2)
int32_t var_24 = rcx_1
int32_t rcx_2 = 1
int32_t rax_15 = (temp5 + (temp4 & 3)) s>> 2

if (rax_15 s>= 1)
    rcx_2 = rax_15

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(r8_2)
int32_t var_20 = rcx_2
int32_t rax_19 = (temp7 + (temp6 & 7)) s>> 3

if (rax_19 s>= 1)
    r9 = rax_19

int32_t var_1c = r9
int32_t var_18 = *(data_143ec7048 + 4)
uint64_t result = zx.q((&var_28)[sx.q(arg2)])
__security_check_cookie(rax_1 ^ &var_48)
return result
