// 函数: sub_14066eb50
// 地址: 0x14066eb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142029960(arg1)

if (rax == 0)
    int64_t* rax_9 = sub_140680bb0()
    int64_t result = rax_9[0x23]
    
    if (result != 0)
        return result
    
    int64_t rdx_4 = *rax_9
    (*(rdx_4 + 0x390))(rax_9, rdx_4)
    return rax_9[0x23]

void* rax_1 = sub_140680c70()
void* const rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    void* rax_2 = sub_140680c70()
    
    if (rax_2 == 0)
        rbx = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rbx = nullptr

void* rax_5 = sub_1423b1350(rax + 0xd0, rbx)
void* const rbx_1 = rax_5
void* rax_6
void* rcx_2
int64_t rdx_3

if (rax_5 != 0)
    rax_6 = sub_140680c70()
    rcx_2 = *(rbx_1 + 0x10)
    rdx_3 = sx.q(*(rax_6 + 0x38))

if (rax_5 == 0 || rdx_3.d s> *(rcx_2 + 0x38) || *(*(rcx_2 + 0x30) + (rdx_3 << 3)) != rax_6 + 0x30)
    rbx_1 = nullptr

return *(rbx_1 + 0x80)
