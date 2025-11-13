// 函数: sub_141817d60
// 地址: 0x141817d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

sub_1409da0d0(arg1, arg5 + arg3, arg4)
void* rax_1 = *arg1
void* arg_8 = rax_1

if (i_1 != 0)
    int32_t* r12_1 = arg2 + 0x50
    void* r15_1 = rax_1 + 0x44
    int32_t i
    
    do
        sub_140596d10(rax_1, &r12_1[-0x14])
        sub_140596d10(r15_1 - 0x34, &r12_1[-0x10])
        *(r15_1 - 0x24) = *(r12_1 - 0x30)
        *(r15_1 - 0x14) = r12_1[-8]
        *(r15_1 - 0x10) = r12_1[-7].b
        *(r15_1 - 0xc) = 0
        int32_t j_1 = r12_1[-4]
        void* rdi_1 = *(r12_1 - 0x18)
        *(r15_1 - 4) = j_1
        
        if (j_1 != 0)
            sub_1405a4be0(r15_1 - 0xc, j_1, 0)
            int64_t* rbx_1 = *(r15_1 - 0xc)
            int32_t j
            
            do
                *rbx_1 = 0
                int32_t rsi_1 = *(rdi_1 + 8)
                int64_t r13 = *rdi_1
                rbx_1[1].d = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(rbx_1, rsi_1, 0)
                    memcpy(*rbx_1, r13, rsi_1 * 2)
                else
                    *(rbx_1 + 0xc) = 0
                
                rbx_1 = &rbx_1[2]
                rdi_1 += 0x10
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
        else
            *r15_1 = 0
        
        *(r15_1 + 4) = 0
        int64_t rbx_2 = sx.q(*r12_1)
        int64_t rsi_2 = *(r12_1 - 8)
        *(r15_1 + 0xc) = rbx_2.d
        
        if (rbx_2.d != 0)
            sub_140808f70(r15_1 + 4, rbx_2.d, 0)
            memcpy(*(r15_1 + 4), rsi_2, (rbx_2 * 0x18).d)
        else
            *(r15_1 + 0x10) = 0
        
        int64_t rax_4 = *(r12_1 + 8)
        r12_1 = &r12_1[0x18]
        *(r15_1 + 0x14) = rax_4
        r15_1 += 0x60
        rax_1 = arg_8 + 0x60
        i = i_1
        i_1 -= 1
        arg_8 = rax_1
        i_2 = i_1
    while (i != 1)

return rax_1
