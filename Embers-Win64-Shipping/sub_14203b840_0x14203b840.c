// 函数: sub_14203b840
// 地址: 0x14203b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_20
_vfprintf_p_l(&var_20, u"Host has left the game.", u"NetworkErrors")
sub_1405d9400()
int64_t var_38 = data_143cd6fd8
int64_t* rdx_1 = data_143cd6fe0

if (rdx_1 != 0)
    rdx_1[1].d += 1

int32_t var_28 = data_143cd6fe8
int64_t* var_48
sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_48)
int32_t var_40
int32_t rax_3 = var_40
int64_t* rdx_5

while (true)
    rdx_5 = var_48
    
    if (rax_3 s< 0)
        break
    
    if (rax_3 s>= rdx_5[1].d)
        break
    
    int64_t* rax_5 = sub_140d3c6e0(*rdx_5 + (sx.q(rax_3) << 3))
    
    if (rax_5 != 0)
        char rax_6
        
        if ((*(rax_5 + 0x294) & 2) != 0)
            int64_t rdx_3 = *rax_5
            rax_6 = (*(rdx_3 + 0x6a8))(rax_5, rdx_3)
        
        if (((*(rax_5 + 0x294) & 2) == 0 || rax_6 == 0) && sub_142271930(rax_5) != 0)
            (*(*rax_5 + 0xa58))(rax_5, &var_20)
    
    rax_3 = var_40 + 1
    var_40 = rax_3

int32_t i

for (i = 0; i s>= 0; i += 1)
    if (i s>= rdx_5[1].d)
        break
    
    int64_t* rax_11 = sub_140d3c6e0(*rdx_5 + (sx.q(i) << 3))
    
    if (rax_11 != 0 && (*(rax_11 + 0x294) & 2) != 0)
        int64_t rdx_6 = *rax_11
        
        if ((*(rdx_6 + 0x6a8))(rax_11, rdx_6) != 0 && sub_142271930(rax_11) != 0)
            i = (*(*rax_11 + 0xa58))(rax_11, &var_38)
            break
    
    rdx_5 = var_48

if (rdx_1 != 0)
    i = rdx_1[1].d
    rdx_1[1].d -= 1
    
    if (i == 1)
        (**rdx_1)(rdx_1)
        i = *(rdx_1 + 0xc)
        *(rdx_1 + 0xc) -= 1
        
        if (i == 1)
            i = (*(*rdx_1 + 8))(rdx_1, 1)

int64_t* var_18

if (var_18 != 0)
    i = var_18[1].d
    var_18[1].d -= 1
    
    if (i == 1)
        i = (**var_18)(var_18)
        int32_t rdi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_18 + 8))(var_18, zx.q(rdi_1))

return i
