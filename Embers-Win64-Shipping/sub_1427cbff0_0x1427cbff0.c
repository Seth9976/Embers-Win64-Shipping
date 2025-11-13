// 函数: sub_1427cbff0
// 地址: 0x1427cbff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg4
int64_t rsi = arg3
int64_t* rdi = arg1
class physx::PxCollection* rax = PxCreateCollection()
class physx::PxCollection* r15 = rax
(**rax)(rax, rdi)
class physx::PxCollection* r14 = PxCreateCollection()
class physx::PxCollection* rbx_3

while (true)
    void** const var_58 = &data_1434cd0a8
    int32_t r12_1 = 0
    class physx::PxCollection* var_50_1 = r14
    int64_t* var_48_1 = rdi
    int64_t var_40_1 = rsi
    
    if ((*(*r15 + 0x38))(r15) != 0)
        int32_t rax_21
        
        do
            int64_t* rax_5 = (*(*r15 + 0x40))(r15, zx.q(r12_1))
            int64_t r8 = *arg2
            int64_t* rax_6 = (*(r8 + 0x18))(arg2, zx.q(rax_5[1].w), r8)
            int64_t r9 = *rax_6
            (*(r9 + 8))(rax_6, rax_5, &var_58, r9)
            
            if (rbx != 0)
                int64_t* rbx_1 = nullptr
                
                if ((*(*rax_5 + 0x20))(rax_5, "PxRigidActor") != 0)
                    rbx_1 = rax_5
                
                if (rbx_1 != 0)
                    int64_t rax_9 = *rbx_1
                    int64_t var_70 = 0
                    int32_t rax_10 = (*(rax_9 + 0xd8))(rbx_1)
                    int64_t* var_68 = nullptr
                    int64_t var_60_1 = 0
                    sub_1427cd0a0(&var_68, rax_10, &var_70)
                    int32_t i_3 = var_60_1.d
                    int64_t* rbp_1 = var_68
                    (*(*rbx_1 + 0xe0))(rbx_1, rbp_1, zx.q(i_3), 0)
                    
                    if (i_3 != 0)
                        int64_t* rbx_2 = rbp_1
                        uint64_t i_2 = zx.q(i_3)
                        uint64_t i
                        
                        do
                            int64_t* rcx_9 = *rbx_2
                            int32_t var_78
                            void* rax_13 = (*(*rcx_9 + 0x90))(rcx_9, &var_78)
                            
                            if (var_78 == 0)
                                int64_t r8_4 = *arg2
                                int64_t* rax_14 = (*(r8_4 + 0x18))(arg2, zx.q(*(rax_13 + 8)), r8_4)
                                int64_t r9_1 = *rax_14
                                (*(r9_1 + 8))(rax_14, rax_13, &var_58, r9_1)
                                
                                if ((*(*r14 + 0x20))(r14, rax_13) == 0)
                                    (*(*r14 + 8))(r14, rax_13, 0)
                            
                            rbx_2 = &rbx_2[1]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    int32_t rax_18 = var_60_1:4.d
                    
                    if ((rax_18 & 0x7fffffff) != 0 && rax_18 s>= 0 && rbp_1 != 0)
                        class physx::PxAllocatorCallback* rax_19 = physx::shdfnd::getAllocator()
                        int64_t r8_6 = *rax_19
                        (*(r8_6 + 0x10))(rax_19, rbp_1, r8_6)
                
                rbx = arg4
            
            r12_1 += 1
            rax_21 = (*(*r15 + 0x38))(r15)
        while (r12_1 u< rax_21)
        rdi = arg1
        rsi = arg3
    
    (**rdi)(rdi, r14)
    rbx_3 = r15
    r15 = r14
    r14 = rbx_3
    uint64_t rax_23 = zx.q(*(rbx_3 + 0x64))
    
    if (rax_23.d != 0 && *(rbx_3 + 0x74) != 0)
        memset(*(rbx_3 + 0x58), 0xffffffff, zx.q((rax_23 << 2).d))
        int32_t r9_2 = *(rbx_3 + 0x60)
        int32_t i_1 = 0
        
        if (r9_2 != 1)
            int32_t* rdx_13 = nullptr
            int64_t r8_8 = 0
            
            do
                i_1 += 1
                r8_8 += 4
                *(rdx_13 + *(rbx_3 + 0x50)) = i_1
                rdx_13 = &rdx_13[1]
            while (i_1 u< r9_2 - 1)
        
        *(*(rbx_3 + 0x50) + (zx.q(*(rbx_3 + 0x60) - 1) << 2)) = 0xffffffff
        *(rbx_3 + 0x6c) = 0
        *(rbx_3 + 0x74) = 0
    
    if ((*(*r15 + 0x38))(r15) == 0)
        break
    
    rbx = arg4

(*(*rbx_3 + 0x70))(rbx_3)
jump(*(*r15 + 0x70))
