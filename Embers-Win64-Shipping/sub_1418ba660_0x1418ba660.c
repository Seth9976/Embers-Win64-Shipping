// 函数: sub_1418ba660
// 地址: 0x1418ba660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 3
*arg1 = &data_142fec118
void* rbx = &arg1[3]
int64_t i_2 = 3
int64_t i

do
    int64_t* rcx = *rbx
    *rbx = 0
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)
    
    rbx += 0x30
    i = i_2
    i_2 -= 1
while (i != 1)
void* lpCriticalSection = &arg1[0x15]
DeleteCriticalSection(lpCriticalSection)

do
    lpCriticalSection -= 0x30
    i_1 -= 1
    sub_14100dea0(lpCriticalSection + 8)
    int64_t* rcx_3 = *lpCriticalSection
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1 && rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
while (i_1 != 0)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
