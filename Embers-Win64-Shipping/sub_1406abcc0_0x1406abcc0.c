// 函数: sub_1406abcc0
// 地址: 0x1406abcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x80)

if (rdi == 0)
    return 

void* rsi_1 = *(arg1 + 0x78)
int32_t code = _Mtx_lock(rsi_1 + 0x18)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int64_t* i_1 = *(rsi_1 + 0x68)

if (i_1 == 0)
    _Mtx_unlock(rsi_1 + 0x18)
    int32_t rax = 0
    bool z_1
    
    if (0 == rdi[2].d)
        rdi[2].d = 1
        z_1 = true
    else
        rax = rdi[2].d
        z_1 = false
    
    if (not(z_1) && rax != 0 && rax != 1 && rax != 2 && rax != 3
            && rax != Concurrency::details::platform::GetCurrentThreadId())
        rdi[2].d = 2
        
        if (rdi[2].d != 3)
            int32_t code_1 = _Mtx_lock(&rdi[0xc])
            
            if (code_1 != 0)
                std::_Throw_C_error(code_1)
                noreturn
            
            if (rdi[0x16].b == code_1.b)
                do
                    _Cnd_wait(&rdi[3], &rdi[0xc])
                while (rdi[0x16].b == 0)
            
            _Mtx_unlock(&rdi[0xc])
else
    int64_t* i_2 = nullptr
    int64_t* i
    
    do
        i = i_1[1]
        
        if (*i_1 == rdi)
            if (i_2 != 0)
                i_2[1] = i
            else
                *(rsi_1 + 0x68) = i
            
            if (i_1[1] == 0)
                *(rsi_1 + 0x70) = i_2
            
            j_sub_140a74f90(i_1)
            break
        
        i_2 = i_1
        i_1 = i
    while (i != 0)
    rdi[2].d = 2
    rdi[1].d += code - 1
    
    if (rdi[1].d == 1)
        (*(*rdi + 8))(rdi)
    
    _Mtx_unlock(rsi_1 + 0x18)

int64_t* rcx_6 = *(arg1 + 0x80)
rcx_6[1].d += code - 1

if (rcx_6[1].d == 1)
    (*(*rcx_6 + 8))()

*(arg1 + 0x80) = 0
