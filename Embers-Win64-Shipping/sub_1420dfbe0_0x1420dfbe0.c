// 函数: sub_1420dfbe0
// 地址: 0x1420dfbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439aa890 == 0 || data_143a2e434 == 0 || (*(arg1 + 0x1f6) & 0x20) != 0)
    return 

int32_t rax_1 = *(arg1 + 0xa0)
int32_t rsi_1 = 0
int64_t r12_1 = 0
int32_t r13_1 = 0
int64_t r14_1 = sx.q(rax_1 - 1)
int64_t var_38 = 0
int32_t var_2c_1 = 0

if (rax_1 - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t* rbx_1 = *(*(arg1 + 0x98) + (r14_1 << 3))
        uint64_t rax
        
        if (rbx_1 != 0)
            rax = (*(*rbx_1 + 0x20))(rbx_1)
        
        if (rbx_1 == 0 || rax.b == 0)
            int64_t r15_1 = sx.q(*(arg1 + 0xb0))
            int32_t rax_4 = (r15_1 + 1).d
            *(arg1 + 0xb0) = rax_4
            
            if (rax_4 s> *(arg1 + 0xb4))
                sub_1405a4d70(arg1 + 0xa8)
            
            *(*(arg1 + 0xa8) + (r15_1 << 3)) = rbx_1
        else
            int64_t rdi_1 = sx.q(rsi_1)
            rsi_1 = (rdi_1 + 1).d
            
            if (rsi_1 s> r13_1)
                sub_1405a4d70(&var_38)
                r13_1 = var_2c_1
                r12_1 = var_38
            
            *(r12_1 + (rdi_1 << 3)) = rbx_1
        
        temp1_1 = r14_1
        r14_1 -= 1
    while (temp1_1 - 1 s>= 0)
    
    if (rsi_1 != 0)
        void arg_10
        uint64_t rbx_2 = *sub_140b58260(&arg_10, u"ActorCluster", 1)
        uint32_t rcx_6
        rcx_6.b = (rbx_2 u>> 0x20).d == 0
        
        if ((rcx_6.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_8 = sub_140d2dfc0(sub_14252d580(), arg1, rbx_2, 0x40, 0, 0, 0, 0, 0)
        *(arg1 + 0xd8) = rax_8
        
        if (rax_8 + 0x28 != &var_38)
            int64_t rcx_9 = *(rax_8 + 0x28)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            *(rax_8 + 0x28) = r12_1
            r12_1 = 0
            *(rax_8 + 0x30) = rsi_1
            *(rax_8 + 0x34) = r13_1
        
        int64_t* rcx_10 = *(arg1 + 0xd8)
        (*(*rcx_10 + 0x28))(rcx_10)

*(arg1 + 0x1f6) |= 0x20

if (r12_1 != 0)
    sub_140a74f90(r12_1)
