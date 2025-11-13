// 函数: sub_141dbba80
// 地址: 0x141dbba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_28
int64_t* rsi_1 = *sub_1421677e0(arg2, &var_28, arg1)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

char rax_4 = arg1[0x1e].b

if (rax_4 == 3)
    (*(*arg1 + 0x2c0))(arg1, rsi_1)
else if (rax_4 == 2 && sub_14243aea0((*(*arg1 + 0x150))(arg1)) != 0)
    (*(*arg1 + 0x2c0))(arg1, rsi_1)

if ((*(*rsi_1 + 0x10))(rsi_1) != 0)
    (*(*arg1 + 0x2c8))(arg1, rsi_1)

int64_t** rdi_2 = arg1[0x32]
int64_t rsi_2 = 0
uint64_t r14_2 = sx.q(arg1[0x33].d) << 3 u>> 3

if (rdi_2 u> &rdi_2[arg1[0x33]])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    int64_t* rbx_2 = *rdi_2
    
    if (rbx_2 != 0)
        int32_t rax_13 = *(rbx_2 + 0xc)
        void* const rax_17
        
        if (rax_13 s>= data_143e1d9b4)
            rax_17 = nullptr
        else
            uint32_t rdx_3 = zx.d(rax_13.w)
            
            if (rax_13 s< 0)
                rax_13 += 0xffff
                rdx_3 -= 0x10000
            
            rax_17 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
        
        if (((*(rax_17 + 8) u>> 0x1d).b & 1) == 0)
            int64_t* rax_19 = sub_1421677e0(arg2, &var_28, rbx_2)
            int64_t r8_3 = *rbx_2
            (*(r8_3 + 0x298))(rbx_2, *rax_19, r8_3)
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp3_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
    
    rdi_2 = &rdi_2[1]
    rsi_2 += 1
while (rsi_2 != r14_2)
