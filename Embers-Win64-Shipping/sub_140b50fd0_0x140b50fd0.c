// 函数: sub_140b50fd0
// 地址: 0x140b50fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t r9 = zx.q(data_14401b1a0)
*arg2 = 1
*arg3 = 0

if (data_143df19b0 s> *(0x14 + *(ThreadLocalStoragePointer + (r9 << 3))))
    _Init_thread_header(&data_143df19b0)
    
    if (data_143df19b0 == 0xffffffff)
        sub_140b58260(&data_143df19a8, u"STATGROUP_None", 1)
        _Init_thread_footer(&data_143df19b0)

uint64_t i

if (*arg1 != data_143df19a8)
    int16_t* var_38
    sub_140b63b70(arg1, &var_38)
    int32_t j = 0
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 0xb)
    int32_t rax_6 = var_40_1 + 0xb
    var_40_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_48)
    
    sub_1405a7220(var_48, 0xb, "STATGROUP_", 0xb, 0x3f)
    sub_140a2fba0(&var_38, &var_48, 1)
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    i = data_1439a0108
    int64_t rdx_5 = sx.q(data_1439a0110)
    
    for (int64_t rcx_13 = (rdx_5 << 4) + i; i != rcx_13; i += 0x10)
        if (*(i + 8) != 0 && *i != 0)
            int32_t rax_7 = (rdx_5 - 1).d
            int16_t* r14_1 = &data_142d40450
            int16_t* r15_1 = &data_142d40450
            int32_t var_30
            
            if (var_30 != 0)
                r15_1 = var_38
            
            int64_t rbp
            rbp.b = 0
            int32_t rcx_15 = data_1439a011c + 1
            int64_t rsi_2 = sx.q(rax_7)
            data_1439a011c = rcx_15
            
            if (rax_7 s>= 0)
                int64_t rdi_5 = rsi_2 << 4
                int64_t temp1_1
                
                do
                    int64_t rax_8 = data_1439a0108
                    
                    if (*(rdi_5 + rax_8 + 8) == 0)
                        rbp.b = 1
                    else
                        int64_t* rcx_16 = *(rdi_5 + rax_8)
                        
                        if (rcx_16 == 0)
                            rbp.b = 1
                        else if ((*(*rcx_16 + 0x50))(rcx_16, r15_1, arg2, arg3) == 0)
                            rbp.b = 1
                    
                    rdi_5 -= 0x10
                    temp1_1 = rsi_2
                    rsi_2 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_15 = data_1439a011c
                rdx_5 = zx.q(data_1439a0110)
            
            data_1439a011c = rcx_15 - 1
            
            if (rbp.b != 0 && rcx_15 - 1 s<= 0)
                int32_t rsi_3 = rdx_5.d
                
                if (rdx_5.d s> 0)
                    int64_t* rdi_6 = nullptr
                    
                    do
                        int64_t rax_11 = data_1439a0108
                        
                        if (*(rdi_6 + rax_11 + 8) == 0)
                            sub_1405a4880(&data_1439a0108, j, 1, 1)
                        else
                            int64_t* rcx_18 = *(rdi_6 + rax_11)
                            
                            if (rcx_18 == 0)
                                sub_1405a4880(&data_1439a0108, j, 1, 1)
                            else if ((*(*rcx_18 + 0x20))(rcx_18) != 0)
                                sub_1405a4880(&data_1439a0108, j, 1, 1)
                            else
                                j += 1
                                rdi_6 = &rdi_6[2]
                        
                        rdx_5 = zx.q(data_1439a0110)
                    while (j s< rdx_5.d)
                
                int32_t rax_14 = (rdx_5 * 2).d
                
                if (rax_14 s<= 2)
                    rax_14 = 2
                
                data_1439a0118 = rax_14
                
                if (rsi_3 s> rax_14 && data_1439a0114 != rdx_5.d)
                    sub_1405a5410(&data_1439a0108, rdx_5.d)
            
            int64_t* rcx_19 = &data_1439a0120
            
            if (*arg2 != 0)
                rcx_19 = &data_1439a0138
            
            if (var_30 != 0)
                r14_1 = var_38
            
            sub_140920c10(rcx_19, r14_1)
            break
    
    int16_t* rcx_20 = var_38
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    i.b = 1
else
    int64_t rsi
    rsi.b = 0
    int32_t rdx = data_1439a0158
    int32_t rcx_1 = data_1439a0164 + 1
    data_1439a0164 = rcx_1
    i = zx.q(rdx - 1)
    int64_t rbx_1 = sx.q(i.d)
    
    if (i.d s>= 0)
        int64_t rdi_2 = rbx_1 << 4
        int64_t temp0_1
        
        do
            i = data_1439a0150
            
            if (*(i + rdi_2 + 8) == 0)
                rsi.b = 1
            else
                int64_t* rcx_2 = *(i + rdi_2)
                
                if (rcx_2 == 0)
                    rsi.b = 1
                else
                    rdx.b = 1
                    i, rdx, r9 = (*(*rcx_2 + 0x50))(rcx_2, rdx)
                    
                    if (i.b == 0)
                        rsi.b = 1
            
            rdi_2 -= 0x10
            temp0_1 = rbx_1
            rbx_1 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_1 = data_1439a0164
        rdx = data_1439a0158
    
    data_1439a0164 = rcx_1 - 1
    
    if (rsi.b != 0 && rcx_1 - 1 s<= 0)
        int32_t rbx_2 = 0
        int32_t rsi_1 = rdx
        
        if (rdx s> 0)
            int64_t rdi_3 = 0
            
            do
                int64_t* rax_3 = data_1439a0150
                
                if (*(rax_3 + rdi_3 + 8) == 0)
                    r9.b = 1
                    sub_1405a4880(&data_1439a0150, rbx_2, 1, r9.b)
                else
                    int64_t* rcx_4 = *(rax_3 + rdi_3)
                    
                    if (rcx_4 == 0)
                        r9.b = 1
                        sub_1405a4880(&data_1439a0150, rbx_2, 1, r9.b)
                    else
                        char rax_5
                        rax_5, r9 = (*(*rcx_4 + 0x20))(rcx_4)
                        
                        if (rax_5 != 0)
                            r9.b = 1
                            sub_1405a4880(&data_1439a0150, rbx_2, 1, r9.b)
                        else
                            rbx_2 += 1
                            rdi_3 += 0x10
                
                rdx = data_1439a0158
            while (rbx_2 s< rdx)
        
        i = zx.q(rdx * 2)
        
        if (i.d s<= 2)
            i = 2
        
        data_1439a0160 = i.d
        
        if (rsi_1 s> i.d && data_1439a015c != rdx)
            sub_1405a5410(&data_1439a0150, rdx)
    
    i.b = 0

return i
