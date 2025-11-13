// 函数: sub_140a75be0
// 地址: 0x140a75be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = arg2

if (*(arg4 + 8) != arg3)
    int32_t rdx = 0
    int32_t rbx_2
    
    if (arg3 == 0 || *arg3 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    arg4[4] = 0
    
    if (arg4[5] != rbx_2)
        sub_1405947f0(&arg4[2], rbx_2)
        rdx = arg4[4]
    
    int32_t rax_1 = rdx + rbx_2
    arg4[4] = rax_1
    
    if (rax_1 s> arg4[5])
        sub_140594770(&arg4[2])
    
    if (rbx_2 != 0)
        memcpy(*(arg4 + 8), arg3, rbx_2 * 2)

void* rbx_3 = &arg4[6]
int64_t rdi_1 = sx.q(*(rbx_3 + 0x328))
int32_t rax_2 = (rdi_1 + 0x64).d
*(rbx_3 + 0x328) = rax_2

if (rax_2 s> *(rbx_3 + 0x32c))
    sub_140a89390(rbx_3, rdi_1.d)

void* rax_3 = *(rbx_3 + 0x320)
void* rcx_4 = rbx_3

if (rax_3 != 0)
    rcx_4 = rax_3

memset(rcx_4 + (rdi_1 << 3), 0, 0x320)
void* rax_4 = *(rbx_3 + 0x320)
int32_t result

if (arg1 == arg2)
    void* rcx_7 = rbx_3
    
    if (rax_4 != 0)
        rcx_7 = rax_4
    
    result = sub_140b65640(rcx_7, 0x64, nullptr)
else
    void* rdx_4 = rbx_3
    
    if (rax_4 != 0)
        rdx_4 = rax_4
    
    result = sub_140b659c0(arg2, rdx_4, 0x64)

int64_t rdi_2 = sx.q(*(rbx_3 + 0x328))

if (result s<= rdi_2.d)
    if (result s>= rdi_2.d || result == rdi_2.d)
        return result
    
    *(rbx_3 + 0x328) = result
    return sub_140a897c0(rbx_3)

*(rbx_3 + 0x328) = result

if (result s> *(rbx_3 + 0x32c))
    sub_140a89390(rbx_3, rdi_2.d)

void* rax_5 = *(rbx_3 + 0x320)

if (rax_5 != 0)
    rbx_3 = rax_5

return memset(rbx_3 + (rdi_2 << 3), 0, sx.q(result - rdi_2.d) << 3)
