// 函数: sub_140a6ba30
// 地址: 0x140a6ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::ForwardCharacterIterator::icu_64::CharacterIterator::VTable** rax =
    j_sub_142a7dd00(0x38)
void*** rsi = rax
int64_t* rdi

if (rax == 0)
    rdi = nullptr
    rsi = nullptr
else
    sub_142a71720(rax)
    rdi = nullptr
    *rsi = &data_142e62778
    rsi[4] = 0
    rsi[5] = 0
    rsi[6] = &rsi[4]
    int32_t rax_1 = rsi[5].d
    int32_t r8_1 = rax_1 - 1
    
    if (rax_1 == 0)
        r8_1 = 0
    
    if (rax_1 == 0)
        sub_142a72230(rsi, &data_142d40450, r8_1)
    else
        sub_142a72230(rsi, rsi[4], r8_1)

int64_t* rbx = arg1[2]

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdi = arg1[1]

(*(*rdi + 0x40))(rdi, rsi)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

jump(*(*arg1 + 0x38))
