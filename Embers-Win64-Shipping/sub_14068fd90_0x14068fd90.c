// 函数: sub_14068fd90
// 地址: 0x14068fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0xe1) == 0
*arg1 = &data_142d8bdc8

if (not(cond:0) && *(arg1 + 0xdc) == 0)
    _Cnd_unregister_at_thread_exit(&arg1[8])

_Cnd_destroy_in_situ(&arg1[0x12])
_Mtx_destroy_in_situ(&arg1[8])
int64_t result = __ExceptionPtrDestroy(&arg1[6])
int64_t rdx = arg1[5]

if (rdx u>= 0x10)
    void* rcx_4 = arg1[2]
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx_4 - 8)
        
        if (rcx_4 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_4 = r8_1
    
    result = j_sub_140a74f90(rcx_4)

arg1[4] = 0
arg1[5] = 0xf
arg1[2].b = 0
return result
