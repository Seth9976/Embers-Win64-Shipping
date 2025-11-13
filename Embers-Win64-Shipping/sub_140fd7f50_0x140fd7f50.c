// 函数: sub_140fd7f50
// 地址: 0x140fd7f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
int32_t rdx = 0
int32_t arg_18 = 0
int16_t rax

if (arg3 == 0)
    rax = *(arg1 + 0x43b6)
else
    rax = -1

int32_t rcx_1 = *(rsi + 0x30) & zx.d(rax)

if (rcx_1 != 0)
    int32_t var_68_1
    int32_t r13_3
    
    do
        var_68_1 = rcx_1
        int32_t i = 0
        r13_3 = neg.d(rcx_1) & rcx_1
        uint64_t rflags_1
        int32_t i_2
        i_2, rflags_1 = _bit_scan_reverse(r13_3)
        
        if (r13_3 != 0)
            i = i_2
        
        int64_t i_1 = sx.q(i)
        void* rdi_1 = *(arg1 + (i_1 << 3) + 0x4260)
        void** rax_4 = *(rdi_1 + 0x18) + 0x20
        void* rdx_1
        
        if (rax_4[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *rax_4
            
            if ((rdx_1.b & 1) != 0)
                rdx_1 = (rdx_1 s>> 1) + rax_4
        
        int64_t var_60
        sub_140b58260(&var_60, rdx_1, 1)
        int32_t r15_1 = 0
        int64_t rcx_4 = *(rsi + 0x58)
        int64_t var_50 = var_60
        int64_t rax_6 = *(rdi_1 + 0x48)
        uint64_t rax_7 = zx.q(*(rcx_4 + (i_1 << 2)))
        
        if (rax_7.d != 0)
            int32_t rdi_2 = *(rcx_4 + (rax_7 << 2))
            int32_t* r14_2 = rcx_4 + (rax_7 << 2) + 4
            
            do
                uint16_t rsi_2 = (rdi_2 u>> 8).w
                void* rbx_1 = *(rax_6 + (zx.q(rsi_2) << 3))
                
                if (rbx_1 == 0)
                    int64_t var_48
                    int64_t* rax_9 = sub_140b63b70(&var_50, &var_48)
                    int16_t* const rcx_6
                    
                    if (rax_9[1].d == rbx_1.d)
                        rcx_6 = &data_142d40450
                    else
                        rcx_6 = *rax_9
                    
                    int16_t* const var_70_1 = rcx_6
                    uint32_t var_78_1 = zx.d(rdi_2.b)
                    sub_140af98a0("Unknown", 0x5c9, 
                        Null UAV (resource %d bind %d) on UB Layout %s", zx.q(rsi_2))
                    int64_t rcx_7 = var_48
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    sub_140afbb40()
                
                uint64_t rax_11 = zx.q(rdi_2.b)
                
                if (*(arg1 + 0x2728 + (rax_11 << 3)) != rbx_1)
                    sub_14081d930(arg1 + 0x2728 + (rax_11 << 3), rbx_1)
                    *(arg1 + 0x27b0) = 1
                
                sub_140fdf350(arg1, *(rbx_1 + 0x20), 1)
                rdi_2 = *r14_2
                r15_1 += 1
                r14_2 = &r14_2[1]
            while (rdi_2 u>> 0x18 == i)
            
            rsi = arg2
        
        rcx_1 ^= r13_3
        rdx = arg_18 + r15_1
        arg_18 = rdx
    while (r13_3 != var_68_1)

return zx.q(rdx)
