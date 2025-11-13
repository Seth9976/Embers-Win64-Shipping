// 函数: sub_140e206f0
// 地址: 0x140e206f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10

if (&arg_10 != &arg1[0x2f])
    arg1[0x2f].d = arg2.d
    *(arg1 + 0x17c) = 1

char rax = 1

if ((*(arg1 + 0x29) & 0x10) != 0)
    rax = (*(*arg1 + 0x160))()

int32_t arg_8

if ((arg1[5].b & 4) != 0 && rax != 0)
    int64_t* rax_3 = (*(*arg1 + 0x188))(arg1)
    int64_t rdx_1 = *rax_3
    (*rdx_1)(rax_3, rdx_1)
    int64_t rdx_2 = *rax_3
    int32_t rsi_1 = 0
    
    if ((*rdx_2)(rax_3, rdx_2) s> 0)
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int32_t rax_17
        
        do
            if ((*(arg1 + 0x29) & 0x20) == 0)
                zmm6 = arg2
            else
                int512_t zmm2
                zmm2.o = arg2
                (*(*arg1 + 0x178))(arg1, zx.q(rsi_1), zmm2)
                zmm6.d = arg3.d f* arg2.d
            
            void* var_58
            (*(*rax_3 + 0x10))(rax_3, &var_58, zx.q(rsi_1))
            void* rcx_5 = var_58
            char* rbx_1 = rcx_5 + 0x1a8
            
            if (*(rbx_1 + 0x10) != 0)
                int64_t* rdx_5 = *(rbx_1 + 8)
                
                if (rdx_5 != 0)
                    if ((*(*rdx_5 + 0x28))(rdx_5) != 0)
                        int64_t* rcx_7
                        
                        if (*(rbx_1 + 0x10) == 0)
                            rcx_7 = nullptr
                        else
                            rcx_7 = *(rbx_1 + 8)
                        
                        (*(*rcx_7 + 0x48))(rcx_7, &arg_8)
                        *rbx_1 = arg_8.b
                    
                    rcx_5 = var_58
            
            if (*rbx_1 == data_1439ae51d)
                *(rcx_5 + 0x29) |= 2
                void* rax_13 = var_58 + 0x178
                void arg_18
                
                if (&arg_18 != rax_13)
                    *rax_13 = zmm6.d
                    *(rax_13 + 4) = 1
            else
                arg3 = sub_140e206f0(rcx_5, zmm6)
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t temp1_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            rsi_1 += 1
            rax_17 = (**rax_3)(rax_3)
        while (rsi_1 s< rax_17)
    
    (**rax_3)(rax_3)

bool cond:1 = *(arg1 + 0x17c) == 0
arg2 = 0x3f800000
arg_8 = 0x3f800000

if (not(cond:1))
    arg2 = arg1[0x2f].d

int64_t result = (*(*arg1 + 0x168))(arg1, arg2)
*(arg1 + 0x29) &= 0xfd
return result
