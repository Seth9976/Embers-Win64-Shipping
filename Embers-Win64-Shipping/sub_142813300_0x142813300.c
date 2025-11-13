// 函数: sub_142813300
// 地址: 0x142813300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142819d40(arg1, arg2, 0x10)
*arg3 -= neg.d(arg2.d & 0xf) & 0xf
uint64_t i_2 = zx.q(*rax)
void* rbx = &rax[1]
sub_142816b70(arg1, i_2.d)
*arg3 -= 4

if (i_2.d != 0)
    int128_t* rax_1 = sub_142815b60(arg1, "Sn::InternalReferencePtr", 1)
    
    if (i_2.d s> 0)
        uint64_t i
        
        do
            sub_142811a50(arg1, rbx, rax_1, 0)
            int64_t rcx_3 = sx.q(*(rax_1 + 0x28))
            *arg3 -= rcx_3.d
            rbx += rcx_3
            i = i_2
            i_2 -= 1
        while (i != 1)

uint64_t i_3 = zx.q(*rbx)
void* result = rbx + 4
sub_142816b70(arg1, i_3.d)
*arg3 -= 4

if (i_3.d != 0)
    int128_t* rax_2 = sub_142815b60(arg1, "Sn::InternalReferenceIdx", 1)
    
    if (i_3.d s> 0)
        uint64_t i_1
        
        do
            sub_142811a50(arg1, result, rax_2, 0)
            int64_t rcx_7 = sx.q(*(rax_2 + 0x28))
            *arg3 -= rcx_7.d
            result += rcx_7
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

return result
