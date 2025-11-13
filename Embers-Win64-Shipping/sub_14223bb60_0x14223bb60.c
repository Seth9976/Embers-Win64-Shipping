// 函数: sub_14223bb60
// 地址: 0x14223bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
void* i = *arg1

for (void* rdi_2 = result * 0x60 + i; i != rdi_2; i += 0x60)
    int32_t* rcx = *(i + 0x40)
    result = sx.q(*rcx)
    
    if (result.d u<= 6)
        switch (result)
            case 6
                result = j_sub_140a74f90(rcx)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    result = sub_14090a730(arg1, 0)

int64_t rcx_2 = *arg1

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall
