// 函数: sub_1405ff6c0
// 地址: 0x1405ff6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t rsi = sx.q(arg2)
CRITICAL_SECTION* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)

if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x1b0))
    rdi.b = 0
else
    void* rcx_2 = rsi * 0x68 + *(arg1 + 0x1a8)
    
    if (rdi.d s< 0 || rdi.d s>= *(rcx_2 + 0x28))
        rdi.b = 0
    else
        int64_t rdi_1 = rdi * 0x70
        rdi = rdi_1 + *(rcx_2 + 0x20)
        
        if (rdi_1 == neg.q(*(rcx_2 + 0x20)))
            rdi.b = 0
        else if (arg4.d f!= *(rdi + 0x4c))
            if (sub_1405f2700(rdi + 0x50, arg4.d) == 0 || arg4.d f< 0f)
                rdi.b = 0
            else
                uint64_t rax_4
                int32_t rdx
                
                for (void* const i = &data_142d5c2c0; i s< &data_142d5c350; i += 0x10)
                    if (arg4.d f== *i)
                        rdx = *(i + 4)
                        rax_4 = zx.q(*(i + 8))
                        goto label_1405ff7b0
                
                if (arg4.d f> 214748f)
                    rdi.b = 0
                else
                    int128_t zmm6
                    zmm6.d = arg4.d f* 10000f
                    rdx = int.d(zmm6.d)
                    rax_4 = 0x2710
                label_1405ff7b0:
                    int64_t* rcx_4 = *rdi
                    int64_t r9_1 = *rcx_4
                    rdi.b = (*(r9_1 + 0xb0))(rcx_4, &data_1434cbc20, zx.q(rdx) << 0x20 | rax_4, 
                        r9_1, -2) s>= 0
        else
            rdi.b = 1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
