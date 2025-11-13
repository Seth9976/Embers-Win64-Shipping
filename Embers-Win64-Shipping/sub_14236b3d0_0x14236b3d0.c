// 函数: sub_14236b3d0
// 地址: 0x14236b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x94) |= 0x40
int64_t* rax = arg1[0xa]

if (rax != 0)
    void* rax_2 = (*(*arg1 + 0x150))()
    uint64_t rdx_1
    
    if (rax_2 == 0)
        rdx_1 = 4
    else
        rdx_1 = zx.q(*(rax_2 + 0x118))
    
    sub_14236b200(arg1[0xa], rdx_1, arg1)
    rax = arg1[0xa]

int32_t rcx_1 = 0

if (rax != 0)
    rcx_1 = rax[1].d

char rdx_2 = *(arg1 + 0x3d)
void* rcx_2

if ((rdx_2 & 2) == 0 && rcx_1 s> 1)
    rcx_2 = **rax

if ((rdx_2 & 2) != 0 || rcx_1 s<= 1 || (*(rcx_2 + 0x44) & 0x80) != 0)
    rax.b = 0
else
    rax.b = 8

*(arg1 + 0x3d) = (rdx_2 & 0xf7) | rax.b
char result = sub_140d23dc0(arg1, 0x30)

if (result == 0 && *(arg1 + 0x34) != 0xffffffff)
    int64_t* rax_4 = sub_140963350(sub_141f88540())
    int64_t r8_2 = *rax_4
    result = (*(r8_2 + 0xd0))(rax_4, arg1, r8_2)

if ((*(arg1 + 0x3d) & 8) != 0)
    result = sub_140d23dc0(arg1, 0x30)
    
    if (result == 0)
        result = sub_141f8dc00(sub_141f88540())
        
        if (result != 0)
            result = sub_1423b27f0(arg1)
            
            if (result != 0)
                jump(*(*sub_140963350(sub_141f88540()) + 0xc0))
    
    *(arg1 + 0x34) = 0xffffffff

return result
