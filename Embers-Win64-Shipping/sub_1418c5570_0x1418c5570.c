// 函数: sub_1418c5570
// 地址: 0x1418c5570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg2)
void* rbx = nullptr
EnterCriticalSection(&data_143efb208)
int32_t r9 = arg1[0xa].d
int32_t r8_1 = rsi ^ 1

if (r8_1 s< r9)
    int64_t r11_1 = arg1[9]
    int64_t* rcx = r11_1 + (sx.q(r8_1) << 3)
    
    while (true)
        void* rdx = *rcx
        
        if (rsi.b == 0 && *(rdx + 0x2c) + 0xa u>= data_14399fa54)
            r8_1 += 1
            rcx = &rcx[1]
            
            if (r8_1 s>= r9)
                break
            
            continue
        
        rbx = rdx
        int32_t rax_6 = r9 - r8_1 - 1
        int32_t rdx_1 = r9
        
        if (rax_6 s>= 1)
            rax_6 = 1
        
        if (rax_6 != 0)
            memcpy(r11_1 + (sx.q(r8_1) << 3), r11_1 + (sx.q(rdx_1 - rax_6) << 3), rax_6 << 3)
            rdx_1 = arg1[0xa].d
        
        arg1[0xa].d = rdx_1 - 1
        break

int64_t result = LeaveCriticalSection(&data_143efb208)

if (rbx == 0)
    return result

sub_1418beb20(**arg1 + 0x10, rbx + 8)
arg1[3] -= zx.q(*(rbx + 0x20))
int64_t rcx_4 = *(rbx + 0x38)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(rbx + 0x10)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return j_sub_140a74f90(rbx)
