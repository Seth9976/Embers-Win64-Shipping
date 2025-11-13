// 函数: sub_141d6b680
// 地址: 0x141d6b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141d65440(arg1 + 0x30)

if (rax == 0)
    *(arg1 + 0x48) = 0
    return rax

int64_t* rbx = *(rax + 0x118)

if (rbx == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rbx = *(rax + 0x118)

void* rax_1
int64_t rax_2
void* rdx_2

if (rbx != 0)
    rax_1 = sub_141d6ec30()
    rdx_2 = rbx[2]
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int64_t* arg_8
int64_t* rax_4 = sub_141d70a40(rbx, &arg_8)

if (arg_8 != 0)
    rax_4 = sub_141d6f320()
    
    if (rax_4 != 0)
        int64_t* rbx_1 = arg_8
        rax_4 = sx.q(rax_4[7].d)
        
        if (rax_4.d s<= rbx_1[7].d)
            int64_t* rcx_4 = rax_4
            rax_4 = rbx_1[6]
            
            if (rax_4[rcx_4] == &rax_4[6] && rbx_1 != 0)
                void* rbp = *(arg1 + 0x48)
                
                if (rbp == 0)
                    goto label_141d6b7b2
                
                void* rax_5 = sub_141d6f320()
                int64_t rax_6
                
                if (rax_5 != 0)
                    rax_6 = sx.q(*(rax_5 + 0x38))
                
                if (rax_5 == 0 || rax_6.d s> rbx_1[7].d
                        || *(rbx_1[6] + (rax_6 << 3)) != rax_5 + 0x30)
                    rbx_1 = nullptr
                
                void* rax_8 = *(rbp + 0x10)
                int64_t rcx_6 = sx.q(rbx_1[7].d)
                void* rax_9
                
                if (rcx_6.d s<= *(rax_8 + 0x38))
                    rax_9 = *(rax_8 + 0x30)
                
                if (rcx_6.d s> *(rax_8 + 0x38) || *(rax_9 + (rcx_6 << 3)) != &rbx_1[6])
                    rbx_1 = arg_8
                label_141d6b7b2:
                    void arg_10
                    
                    if (*(arg1 + 0x48) != 0)
                        int64_t var_28
                        void arg_18
                        int64_t* rax_13 = sub_140b63b70(
                            sub_140d25240(&arg_18, arg1, sub_141d6f320(), 
                                *sub_140b58170(&arg_10, "Settings_EXPIRED", 1)), 
                            &var_28)
                        int16_t* const rdx_8
                        
                        if (rax_13[1].d == 0)
                            rdx_8 = &data_142d40450
                        else
                            rdx_8 = *rax_13
                        
                        int64_t* rcx_10 = *(arg1 + 0x48)
                        (*(*rcx_10 + 0x138))(rcx_10, rdx_8, 0, 0)
                        int64_t rcx_11 = var_28
                        
                        if (rcx_11 != 0)
                            sub_140a74f90(rcx_11)
                        
                        rbx_1 = arg_8
                    
                    int64_t* rbp_1
                    
                    if (rbx_1 == 0)
                        rbp_1 = nullptr
                    else
                        void* rax_15 = sub_141d6f320()
                        
                        if (rax_15 == 0)
                            rbp_1 = nullptr
                        else
                            rbp_1 = arg_8
                            int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                            
                            if (rax_16.d s> rbp_1[7].d
                                    || *(rbp_1[6] + (rax_16 << 3)) != rax_15 + 0x30)
                                rbp_1 = nullptr
                    
                    uint64_t rbx_4 = *sub_140b58170(&arg_10, "Settings", 1)
                    uint32_t rcx_16
                    rcx_16.b = (rbx_4 u>> 0x20).d == 0
                    
                    if ((rcx_16.b & sub_140b5b8a0(rbx_4.d, 0)) != 0)
                        sub_140d19010(arg1, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    rax_9 = sub_140d2dfc0(rbp_1, arg1, rbx_4, 0, 0, 0, 0, 0, 0)
                    int32_t rcx_20 = *(arg1 + 8) & 0x69
                    *(arg1 + 0x48) = rax_9
                    *(rax_9 + 8) |= rcx_20
                
                return rax_9

*(arg1 + 0x48) = 0
return rax_4
