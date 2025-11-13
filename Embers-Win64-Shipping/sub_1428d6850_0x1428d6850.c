// 函数: sub_1428d6850
// 地址: 0x1428d6850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0x20
int64_t* rbp_1
bool cond:0_1
int64_t* rbx

if (arg1 != 0)
    rbx = arg1
label_1428d6969:
    rbp_1 = rbx
    
    if (rbx != 0)
        void* rax_6
        
        if (*rbx == 0)
            rax_6 = sub_142890500()
            *rbx = rax_6
        
        if (*rbx != 0 || rax_6 != 0)
            void* rax_7
            
            if (rbx[1] == 0)
                rax_7 = sub_142890500()
                rbx[1] = rax_7
            
            if (rbx[1] != 0 || rax_7 != 0)
                if (arg2 != 0)
                    sub_1428901a0(rbx[2])
                    rbx[2] = sub_1428900c0(arg2)
                
                if (rbx[2] != 0)
                    if (arg5 != 0)
                        rbx[7] = arg5
                    
                    if (arg6 != 0)
                        rbx[6] = arg6
                    
                    if (sub_1429198c0(*rbx, rbx[3]) != 0)
                        int32_t i
                        
                        do
                            int32_t var_38
                            int32_t arg_8
                            var_38.q = &arg_8
                            
                            if (sub_1428da830(rbx[1], *rbx, rbx[3], arg4, var_38) != 0)
                                int64_t rax_15 = rbx[7]
                                int64_t rdx_6
                                
                                if (rax_15 != 0)
                                    rdx_6 = rbx[6]
                                
                                int32_t rax_16
                                
                                if (rax_15 == 0 || rdx_6 == 0)
                                    int64_t* rcx_13 = *rbx
                                    var_38.q = arg4
                                    rax_16 = sub_142905ff0(rcx_13, rcx_13, rbx[2], rbx[3], var_38)
                                else
                                    int64_t rcx_12 = *rbx
                                    var_38.q = arg4
                                    rax_16 = rax_15(rcx_12, rcx_12, rbx[2], rbx[3], var_38, rdx_6)
                                
                                if (rax_16 != 0)
                                    void* r8_7 = rbx[6]
                                    
                                    if (r8_7 == 0)
                                        return rbx
                                    
                                    int64_t* rcx_14 = rbx[1]
                                    
                                    if (sub_1428cd160(rcx_14, rcx_14, r8_7, arg4) != 0)
                                        int64_t* rcx_15 = *rbx
                                        
                                        if (sub_1428cd160(rcx_15, rcx_15, rbx[6], arg4) != 0)
                                            return rbx
                                
                                break
                            
                            if (arg_8 == 0)
                                break
                            
                            int32_t rax_13 = rdi
                            rdi -= 1
                            
                            if (rax_13 == 0)
                                sub_1428a5670(3, 0x80, 0x71, "crypto\bn\bn_blind.c", 0x11d)
                                break
                            
                            i = sub_1429198c0(*rbx, rbx[3])
                        while (i != 0)
    
    cond:0_1 = arg1 != 0
    
    if (arg1 == 0)
        sub_1428d6b20(rbx)
        cond:0_1 = arg1 != 0
else
    int64_t* rax_1 = sub_1428a6a70(0x48)
    rbx = rax_1
    
    if (rax_1 != 0)
        CRITICAL_SECTION* rax_2 = sub_1428a5be0()
        rbx[8] = rax_2
        
        if (rax_2 != 0)
            rbx[4].d = sub_1428a5b10()
            int64_t* rax_4 = sub_1428900c0(arg3)
            rbx[3] = rax_4
            
            if (rax_4 != 0)
                if (sub_142890210(arg3, 4) != 0)
                    sub_1428908d0(rbx[3], 4)
                
                *(rbx + 0x24) = 0xffffffff
            else
                sub_1428d6b20(rbx)
                rbx = nullptr
            
            goto label_1428d6969
        
        sub_1428a5670((&rax_2->DebugInfo + 3).d, (rax_2 + 0x66).d, (rax_2 + 0x41).d, 
            "crypto\bn\bn_blind.c", 0x2b)
        sub_1428a6780(rbx)
        rbp_1 = nullptr
        sub_1428d6b20(nullptr)
        cond:0_1 = arg1 != 0
    else
        sub_1428a5670(3, 0x66, (arg1 + 0x41).d, "crypto\bn\bn_blind.c", 0x25)
        rbp_1 = nullptr
        sub_1428d6b20(nullptr)
        cond:0_1 = arg1 != 0

if (cond:0_1)
    return rbp_1

return nullptr
