// 函数: sub_1413a8300
// 地址: 0x1413a8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x50)

if (rax == 0)
    int16_t rdx = arg1[0xa].w
    
    if (rdx == 1)
    label_1413a8432:
        
        if (arg1[5] != 0 && *(arg1 + 0x26) != 0 && rdx - 1 u<= 0xf && arg1[0xb] != 0
                && ((arg1[0xd] & 0x10000) == 0 || ((data_1439c7a08 - 1) & 0xfffffffd) == 0))
            sub_1419a0ce0(&data_1439c9260, *(arg2 + 0x40), arg1, &arg1[0x14], *(arg1 + 0x40), 1, 1, 
                0)
            return *(arg1 + 0x50) + 8
    else if (rdx - 1 u<= 7 && arg1[5] != 0 && arg1[6] != 0 && arg1[7] == 0 && *(arg1 + 0x25) == 0)
        goto label_1413a8432
    
    TEB* gsbase
    
    if (data_143ec6e1c
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ec6e1c)
        
        if (data_143ec6e1c == 0xffffffff)
            atexit(sub_142cde7e0)
            _Init_thread_footer(&data_143ec6e1c)
    
    return &data_1439b6a08

int64_t rcx = *(rax + 8)
void* rbp = *(arg2 + 0x40)
int64_t* rbx_2 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rbx_2[1]

if (rax_1 u> *(rbp + 0x38))
    sub_140b0e3d0(rbp + 0x30, 0x10)
    rbx_2 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rbx_2[1]

*(rbp + 0x30) = rax_1
*rbx_2 = rcx
void*** rcx_4 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[5]

if (rax_2 u> *(rbp + 0x38))
    sub_140b0e3d0(rbp + 0x30, 0x30)
    rcx_4 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[5]

*(rbp + 0x30) = rax_2
void**** rax_3 = *(rbp + 8)
*(rbp + 0x14) += 1
*rax_3 = rcx_4
*(rbp + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d549c8
rcx_4[3] = rbx_2
rcx_4[2].d = 1
rcx_4[4].d = 1
return *(arg1 + 0x50) + 8
