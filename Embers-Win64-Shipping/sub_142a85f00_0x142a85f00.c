// 函数: sub_142a85f00
// 地址: 0x142a85f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
sub_142a85df0()
int32_t code = _Mtx_lock(&data_144015ae0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_18 = 1
int32_t* rbx

if (*arg1 != 0)
    TEB* gsbase
    void* rdi_1 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    
    while (*arg1 == 1)
        if (data_144015b88 s> *(0x14 + *rdi_1))
            _Init_thread_header(&data_144015b88)
            
            if (data_144015b88 == 0xffffffff)
                _Cnd_init_in_situ(&data_144015b40)
                atexit(sub_142d16020)
                _Init_thread_footer(&data_144015b88)
        
        int32_t code_1 = _Cnd_wait(&data_144015b40, &data_144015ae0)
        
        if (code_1 != 0)
            std::_Throw_C_error(code_1)
            noreturn
    
    rbx.b = 0
else
    *arg1 = 1
    rbx.b = 1

int32_t code_2 = _Mtx_unlock(&data_144015ae0)

if (code_2 == 0)
    return zx.q(rbx.b)

std::_Throw_C_error(code_2)
noreturn
