// 函数: sub_1423d6a40
// 地址: 0x1423d6a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142033590(0)
void* rdi = data_143f5b298
int64_t* rdi_1

if (*(rdi + 0x210) == 0)
    rdi_1 = nullptr
else
    void* rax_1 = sub_1424bf360()
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = *(rdi + 0x210)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rdi_1[7].d || *(rdi_1[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rdi_1 = nullptr

void* rax_4 = sub_140cde0b0()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(rax_4, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_6 = sub_140d2dfc0(rdi_1, rax_4, 0, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x230) = rax_6
int64_t rdx_3 = *rax_6
(*(rdx_3 + 0x2c0))(rax_6, rdx_3)
jump(*(**(arg1 + 0x230) + 0x298))
