// 函数: sub_14125f360
// 地址: 0x14125f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char* result = arg5
int64_t* rsi = arg2

if (*(arg1 + 0xd34) != 0 || *(arg1 + 0xd77) != 0)
    int32_t rax_2 = arg2[1].d
    int64_t var_130 = 0
    char* result_1 = nullptr
    
    if (rax_2 != 0)
        sub_141105150(&var_130, rax_2)
        rax_2 = rsi[1].d
    
    int32_t i_1 = 0
    
    if (rax_2 s> 0)
        int64_t r14_1 = 0
        int64_t var_108_1 = 0
        int32_t i
        
        do
            int32_t r8 = arg3[2].d
            
            if (r8 == r8 s/ 0x46 * 0x46)
                void* rax_5 = j_sub_140a82f30(0x3f70)
                void* const rdi_1
                
                if (rax_5 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1 = sub_14108b640(rax_5)
                
                int64_t rbx_1 = sx.q(arg3[1].d)
                int32_t rax_7 = (rbx_1 + 1).d
                arg3[1].d = rax_7
                
                if (rax_7 s> *(arg3 + 0xc))
                    sub_140638870(arg3)
                
                *(*arg3 + (rbx_1 << 3)) = rdi_1
                r8 = arg3[2].d
            
            arg3[2].d = r8 + 1
            int64_t* r12_2 = *rsi + r14_1
            void* rsi_1 = *r12_2
            void* r15_2 = zx.q(r8 s% 0x46) * 0xe8 + *(*arg3 + (sx.q(r8 s/ 0x46) << 3))
            sub_141264230(r15_2, rsi_1)
            void* r14_2 = rsi_1 + 0x78
            void* rbx_2 = r15_2 + 0x78
            
            if (rbx_2 != r14_2)
                int64_t rdi_2 = sx.q(*(r14_2 + 0x38))
                void* r12_3 = *(r14_2 + 0x30)
                int32_t r8_1 = *(rbx_2 + 0x3c)
                *(rbx_2 + 0x38) = rdi_2.d
                
                if (rdi_2.d != 0 || r8_1 != 0)
                    sub_1410b37d0(rbx_2, rdi_2.d, r8_1)
                    void* r9 = *(rbx_2 + 0x30)
                    
                    if (r12_3 != 0)
                        r14_2 = r12_3
                    
                    if (r9 != 0)
                        rbx_2 = r9
                    
                    memcpy(rbx_2, r14_2, (rdi_2 * 0xc).d)
                else
                    *(rbx_2 + 0x3c) = 4
            
            *(r15_2 + 0xb8) = *(rsi_1 + 0xb8)
            *(r15_2 + 0xc0) = *(rsi_1 + 0xc0)
            *(r15_2 + 0xc4) = *(rsi_1 + 0xc4)
            *(r15_2 + 0xc8) = *(rsi_1 + 0xc8)
            *(r15_2 + 0xcc) = *(rsi_1 + 0xcc)
            *(r15_2 + 0xd0) = *(rsi_1 + 0xd0)
            *(r15_2 + 0xd0) = *(rsi_1 + 0xd0)
            *(r15_2 + 0xe0) = *(rsi_1 + 0xe0)
            *(r15_2 + 0xe1) = *(rsi_1 + 0xe1)
            int32_t rdi_3
            
            if (*(arg1 + 0xd77) == 0)
                rdi_3 = r12_2[4].d << 0x1a s>> 0x1d
                
                if (*(arg1 + 0xd34) != 0 && rdi_3 != 0)
                    int32_t rdi_6
                    rdi_6.b = rdi_3 != 2
                    rdi_3 = rdi_6 + 1
            else
                rdi_3 = 0
            
            int32_t rbx_3 = *(rsi_1 + 0xc0)
            int64_t* rbx_6
            int64_t* rsi_2
            
            if (not(test_bit(rbx_3, 0x1e)))
                EnterCriticalSection(&data_143e8eab0)
                rbx_6 = (zx.q(*(rsi_1 + 0xc0)) & 0x3fffffff) * 0x88 + data_143e8eaf0
                LeaveCriticalSection(&data_143e8eab0)
                rsi_2 = arg4
            else
                rsi_2 = arg4
                rbx_6 = ((zx.q(rbx_3) & 0x3fffffff) << 7) + *rsi_2
            
            int64_t* rcx_10 = rbx_6[1]
            int64_t var_c0 = *rbx_6
            
            if (rcx_10 != 0)
                sub_1419c5510(rcx_10)
            
            int64_t* rcx_11 = rbx_6[2]
            
            if (rcx_11 != 0)
                sub_1419c5510(rcx_11)
            
            int64_t* rcx_12 = rbx_6[3]
            
            if (rcx_12 != 0)
                sub_1419c5510(rcx_12)
            
            int64_t* rcx_13 = rbx_6[4]
            
            if (rcx_13 != 0)
                sub_1419c5510(rcx_13)
            
            int64_t* rcx_14 = rbx_6[5]
            
            if (rcx_14 != 0)
                sub_1419c5510(rcx_14)
            
            int32_t var_90_1 = rbx_6[6].d
            int32_t var_8c_1 = *(rbx_6 + 0x34)
            int32_t var_88_1 = rbx_6[7].d
            int32_t var_84_1 = *(rbx_6 + 0x3c)
            int32_t var_80_1 = rbx_6[8].d
            int64_t var_78_1 = rbx_6[9]
            int64_t var_68_1 = rbx_6[0xb]
            char var_50_1 = rbx_6[0xe].b
            int32_t rcx_17 = r12_2[4].d << 0x1d s>> 0x1d
            char var_4d_1 = 0
            int32_t var_4c_1 = *(rbx_6 + 0x74)
            int16_t var_4f_1 = 0
            int128_t var_60_1 = *(rbx_6 + 0x60)
            int64_t rax_37
            
            if (rcx_17 == 0)
                if (rdi_3 == 0)
                    rax_37 = data_1439b5590
                else
                    rax_37 = data_1439b5578
                    
                    if (rdi_3 != 2)
                        rax_37 = data_1439b5560
            else if (rcx_17 == 1)
                if (rdi_3 == 0)
                    rax_37 = data_1439b5548
                else
                    rax_37 = data_1439b5530
                    
                    if (rdi_3 != 2)
                        rax_37 = data_1439b5518
            else if (rdi_3 == 0)
                rax_37 = data_14395da18
            else
                rax_37 = data_1439b5500
                
                if (rdi_3 != 2)
                    rax_37 = data_1439b54e8
            
            int64_t var_70_1 = rax_37
            int32_t var_120
            sub_14126c520(&var_120, &var_c0, rsi_2, result)
            *(r15_2 + 0xc0) = var_120
            int32_t rax_39 = r12_2[2].d
            int64_t rbx_8 = sx.q(result_1.d)
            int32_t var_ec_1 = *(r12_2 + 0x14)
            int32_t var_e4_1 = *(r12_2 + 0x1c)
            int32_t var_e8_1 = 0xffffffff
            int64_t var_f8_1 = r12_2[1]
            int32_t rax_46 = (rbx_8 + 1).d
            int32_t var_e0 = var_e0 ^ ((var_e0 ^ r12_2[4].d) & 0x3f)
            result_1.d = rax_46
            
            if (rax_46 s> result_1:4.d)
                sub_1410b38f0(&var_130, rbx_8.d)
            
            int64_t rax_47 = var_130
            int64_t rcx_22 = rbx_8 * 5
            *(rax_47 + (rcx_22 << 3)) = r15_2.o
            *(rax_47 + (rcx_22 << 3) + 0x10) = rax_39.o
            *(rax_47 + (rcx_22 << 3) + 0x20) = var_e0.q
            
            if (rcx_14 != 0)
                sub_1419d6470(rcx_14)
            
            if (rcx_13 != 0)
                sub_1419d6470(rcx_13)
            
            if (rcx_12 != 0)
                sub_1419d6470(rcx_12)
            
            if (rcx_11 != 0)
                sub_1419d6470(rcx_11)
            
            if (rcx_10 != 0)
                sub_1419d6470(rcx_10)
            
            i = i_1 + 1
            rsi = arg2
            r14_1 = var_108_1 + 0x28
            i_1 = i
            var_108_1 = r14_1
        while (i s< rsi[1].d)
    
    *rsi = var_130
    result = result_1
    rsi[1] = result

__security_check_cookie(rax_1 ^ &var_158)
return result
