// 函数: sub_142bb5bc0
// 地址: 0x142bb5bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t* rbx = arg1[0x32]
int32_t result = sub_142bad3f0(rbx, rdi, arg1)

if (result == 0)
    *(rbx + 0x315) = arg2
    rbx[0x4d].d = 0
    *(rbx + 0x1c) = 0
    *(rbx + 0x2cc) = 0
    int64_t rax = *(rdi + 0x3c8)
    int32_t rcx_1 = *(rdi + 0x3c0)
    rbx[0x52] = rax
    rbx[0x53].d = rcx_1
    rbx[0x54] = 0
    rbx[0x55].d = 0
    int32_t result_1
    
    if (*(rdi + 0x3c0) u<= 0)
        result_1 = 0
    else
        *(rbx + 0x214) = rcx_1
        rbx[0x41] = rax
        rbx[0x42].d = 0
        *(rbx + 0x204) = 2
        result_1 = (*(rdi + 0x3e0))(rbx)
    
    *(arg1 + 0x19c) = result_1
    rbx[0x40].w = 1
    *(rbx + 0x1d4) = 1
    rbx[0x38].d = 0
    *(rbx + 0x1c4) = 0
    *(rbx + 0x1c6) = 0x4000
    *(rbx + 0x1ca) = 0x4000
    *(rbx + 0x1ce) = 0x4000
    *(rbx + 0x1fc) = 0x10001
    *(arg1 + 0xf0) = *(rbx + 0x1c0)
    *(arg1 + 0x100) = *(rbx + 0x1d0)
    *(arg1 + 0x110) = *(rbx + 0x1e0)
    *(arg1 + 0x120) = *(rbx + 0x1f0)
    arg1[0x26].d = rbx[0x40].d
    *(arg1 + 0x94) = rbx[0x48].d
    arg1[0x15].d = rbx[0x4a].d
    arg1[0x17].d = rbx[0x4c].d
    *(arg1 + 0xbc) = *(rbx + 0x264)
    result = result_1
    *(arg1 + 0xc0) = *(rbx + 0x280)
    *(arg1 + 0xd0) = *(rbx + 0x290)
    *(arg1 + 0xe0) = *(rbx + 0x2a0)

return result
