// 函数: sub_140f05750
// 地址: 0x140f05750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*arg3)
int32_t rbx = arg3[1]

if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x20))
    *arg2 = 0xffffffff
    *(arg2 + 4) = 0
    arg2[1].d = 0xffffffff
    *(arg2 + 0xc) = 0
    return arg2

int64_t* r15_1 = rdi * 0x70 + *(arg1 + 0x18)
int64_t* rcx = *(arg1 + 0xf0)
(*(*rcx + 0x20))(rcx, *r15_1)
int64_t* rcx_1 = *(arg1 + 0xf0)
int32_t r8 = *(*r15_1 + 8)
int64_t r9 = *rcx_1
int32_t rax_2 = r8 - 1

if (r8 == 0)
    rax_2 = 0

int32_t i_7

if (rbx s>= rax_2)
    i_7 = (*(r9 + 0x40))(rcx_1)
else
    i_7 = (*(r9 + 0x60))(rcx_1, zx.q(rbx))

int64_t* rcx_2 = *(arg1 + 0xf0)
int32_t i_5 = i_7
int32_t i_3 = (*(*rcx_2 + 0x48))(rcx_2)
int32_t i_1 = i_3

if (i_3 != 0xffffffff)
    int32_t i
    
    do
        int64_t i_4 = sx.q(i_1)
        int64_t i_8 = sx.q(i_5)
        
        if (i_4 s< i_8)
            while (sub_140a81220(*(**r15_1 + (i_4 << 1))) != 0)
                i_4 += 1
                
                if (i_4 s>= i_8)
                    goto label_140f0581b
            
            break
        
    label_140f0581b:
        int64_t* rcx_5 = *(arg1 + 0xf0)
        i_5 = i_1
        i = (*(*rcx_5 + 0x48))(rcx_5)
        i_1 = i
    while (i != 0xffffffff)
    rdi = zx.q(rdi.d)

int64_t* rcx_6 = *(arg1 + 0xf0)
(*(*rcx_6 + 0x28))(rcx_6)

if (i_5 == i_1 || i_1 == 0xffffffff)
    *arg2 = 0xffffffff
    *(arg2 + 4) = 0
    arg2[1].d = 0xffffffff
    *(arg2 + 0xc) = 0
else
    int32_t i_2 = i_1
    *arg2 = rdi.d.q
    int32_t i_6 = i_5
    arg2[1] = rdi.d.q

return arg2
