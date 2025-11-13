// 函数: sub_140a8cfb0
// 地址: 0x140a8cfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::ForwardCharacterIterator::icu_64::CharacterIterator::VTable** rax =
    j_sub_142a7dd00(0x38)
int64_t* rdi = nullptr
struct icu_64::ForwardCharacterIterator::icu_64::CharacterIterator::VTable** rdx_1

if (rax == 0)
    rdx_1 = nullptr
else
    rdx_1 = sub_140a60c60(rax, arg2)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    int32_t rax_2 = rbx_1[1].d
    
    if (rax_2 != 0)
        rbx_1[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rdi = arg1[1]

(*(*rdi + 0x40))(rdi, rdx_1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

jump(*(*arg1 + 0x38))
