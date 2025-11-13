// 函数: sub_141f05790
// 地址: 0x141f05790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8

if ((arg1[5].b & 1) != 0)
    int32_t rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a9478)
    
    if (rax_1 s< 9)
        int64_t rax_2 = j_sub_140a82f30(0x38)
        int64_t* rbx_1
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = sub_1420f37f0(rax_2)
        
        *(arg2 + 0x28) = rbx_1
        arg_8 = *rbx_1
        sub_1420d96c0(arg1, &arg_8, zmm1_1)
        
        if ((arg1[5].b & 1) != 0)
            void* rax_5 = arg_8
            int64_t* rcx_2 = *rbx_1
            *rbx_1 = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 0x1c) += 1
            
            if (rcx_2 != 0)
                int32_t temp0_1 = *(rcx_2 + 0x1c)
                *(rcx_2 + 0x1c) -= 1
                
                if (temp0_1 == 1)
                    (*(*rcx_2 + 0x40))()
        
        void* rbx_2 = *(arg2 + 0x28)
        arg_8 = *(rbx_2 + 8)
        sub_142307be0(arg1, &arg_8, zmm1_1)
        
        if ((arg1[5].b & 1) != 0)
            void* rax_8 = arg_8
            int64_t* rcx_4 = *(rbx_2 + 8)
            *(rbx_2 + 8) = rax_8
            
            if (rax_8 != 0)
                *(rax_8 + 0x18) += 1
            
            if (rcx_4 != 0)
                rcx_4[3].d -= 1
                
                if (rcx_4[3].d == 1)
                    (*(*rcx_4 + 0x38))()

int32_t rax_10
int512_t zmm1_2
rax_10, zmm1_2 = sub_140b4e7c0(arg1, &data_1439a9478)

if (rax_10 s>= 0xc)
    sub_1409ac860(arg1, arg2 + 0x30, zmm1_2)
else
    void var_18
    
    if ((arg1[5].b & 1) != 0)
        *(arg2 + 0x30) = *sub_140b214c0(&var_18)

int64_t* rax_13 = (*(*arg1 + 0x130))(arg1, arg2 + 8)
int64_t r8 = *rax_13
sub_141f05480((*(r8 + 0x130))(rax_13, arg2 + 0x10, r8), arg2 + 0x18, zmm1_2)

if ((arg1[5].b & 1) != 0)
    int32_t rax_15
    int512_t zmm1_3
    rax_15, zmm1_3 = sub_140b4e7c0(arg1, &data_1439a9478)
    
    if (rax_15 s< 9)
        void* rbx_3 = *(arg2 + 0x28)
        (*(*arg1 + 8))(arg1, sx.q(*(rbx_3 + 0x18)) << 4, sx.q(*(rbx_3 + 0x1c)) << 4)
        int32_t rax_17
        
        if ((arg1[5].b & 1) == 0)
            rax_17 = *(rbx_3 + 0x18)
        else
            rax_17 = 0
        
        int64_t* rcx_13 = arg1[1]
        arg_8.d = rax_17
        int32_t* rdx_8 = *rcx_13
        
        if (&rdx_8[1] u> rcx_13[1])
            void** rdx_9 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_9, zmm1_3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_9, 4)
        else
            arg_8.d = *rdx_8
            *rcx_13 += 4
        
        int32_t rcx_17 = arg_8.d
        
        if (rcx_17 != 0)
            char rax_22 = *(arg1 + 0x29)
            
            if ((rax_22 & 1) == 0 && rcx_17 s> 0
                    && ((*(arg1 + 0x2b) & 8) == 0 || rcx_17 s<= 0x100000))
                *(rbx_3 + 0x18) = rcx_17
                
                if ((arg1[5].b & 1) != 0)
                    sub_1405a4be0(rbx_3 + 0x10, rcx_17, *(rbx_3 + 0x1c))
                    rcx_17 = *(rbx_3 + 0x18)
                
                (*(*arg1 + 0x150))(arg1, *(rbx_3 + 0x10), sx.q(rcx_17) << 4)
                return arg1
            
            *(arg1 + 0x29) = rax_22 | 1
        else if ((arg1[5].b & 1) != 0)
            *(rbx_3 + 0x18) = rcx_17
            
            if (*(rbx_3 + 0x1c) != rcx_17)
                sub_1405a5410(rbx_3 + 0x10, 0)

return arg1
