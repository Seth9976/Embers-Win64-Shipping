// 函数: sub_142682ef0
// 地址: 0x142682ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x24))
int32_t** rsi = *(arg1 + 0x58)
int64_t entry_r9

if (result.d u> 0xa)
    result.b = 0
else
    switch (result)
        case 0
            result.b = 0
        case 1
            sub_1426929c0(arg1 + 0x2c0, 0)
            int64_t* rax = j_sub_140a82f30(0x30)
            int64_t* rbx_1 = rax
            
            if (rax == 0)
                rbx_1 = rax
            else
                __builtin_memset(rbx_1, 0, 0x2c)
            
            void arg_8
            
            if (arg1 + 0x58 != &arg_8)
                int64_t* rsi_1 = *(arg1 + 0x58)
                *(arg1 + 0x58) = rbx_1
                
                if (rsi_1 != 0)
                    sub_142632530(*rsi_1)
                    sub_1426325c0(rsi_1[1])
                    sub_1426324d0(rsi_1[2])
                    sub_142671860(&rsi_1[3])
                    j_sub_140a74f90(rsi_1)
            else if (rbx_1 != 0)
                sub_142632530(*rbx_1)
                sub_1426325c0(rbx_1[1])
                sub_1426324d0(rbx_1[2])
                sub_142671860(&rbx_1[3])
                j_sub_140a74f90(rbx_1)
            
            rsi = *(arg1 + 0x58)
            *(arg1 + 0x24) = 2
            goto label_142682ff0
        case 2
        label_142682ff0:
            
            if (sub_142677b10(arg1, arg2, rsi).b == 0)
                *(arg1 + 0x24) = 0
                result.b = 0
            else
                double* rcx_11 = *(arg1 + 0x40)
                *(arg1 + 0x24) = 3
                result, arg3 = sub_142697ce0(rcx_11)
                
                if (result.b == 0)
                    goto label_14268301b
                
                result.b = 2
        case 3
        label_14268301b:
            char rax_1
            rax_1, entry_r9 = sub_1426900e0(arg1, arg2, rsi, arg3)
            
            if (rax_1 != 2)
                *(arg1 + 0x24) = 4
            
            if (*(*(arg1 + 0x40) + 0x10) == 0)
                goto label_142683036
            
            result.b = 2
        case 4
        label_142683036:
            int32_t* rax_2 = *rsi
            
            if (rax_2 != 0 && *(rax_2 + 0x30) != 0)
                goto label_142683064
            
            sub_14262d160(arg2, 2, "GenerateCompressedLayersTimeSliced: empty tile - aborting", 
                entry_r9)
            *(arg1 + 0x24) = 0
            result.b = 1
        case 5
        label_142683064:
            bool cond:0_1 = (*(arg1 + 0x12c) & 1) == 0
            *(arg1 + 0x24) = 6
            
            if (cond:0_1 || (*(arg1 + 0x14) & 2) != 0)
                goto label_1426830a7
            
            sub_142674740(arg1, *rsi, _mm_cvtepi32_ps(zx.o(*(arg1 + 0x104))))
            
            if (sub_142697ce0(*(arg1 + 0x40)).b == 0)
                goto label_1426830a7
            
            result.b = 2
        case 6
        label_1426830a7:
            sub_142683c80(arg1, arg2, rsi)
            double* rcx_17 = *(arg1 + 0x40)
            *(arg1 + 0x24) = 7
            
            if (sub_142697ce0(rcx_17).b == 0)
                goto label_1426830c6
            
            result.b = 2
        case 7
        label_1426830c6:
            
            if (sub_142676000(arg1, arg2, rsi).b == 0)
                *(arg1 + 0x24) = 0
                result.b = 0
            else
                double* rcx_19 = *(arg1 + 0x40)
                *(arg1 + 0x24) = 8
                
                if (sub_142697ce0(rcx_19).b == 0)
                    goto label_1426830e9
                
                result.b = 2
        case 8
        label_1426830e9:
            
            if (sub_1426912a0(arg1, arg2, rsi).b == 0)
                *(arg1 + 0x24) = 0
                result.b = 0
            else
                double* rcx_21 = *(arg1 + 0x40)
                *(arg1 + 0x24) = 9
                
                if (sub_142697ce0(rcx_21).b == 0)
                    goto label_14268310c
                
                result.b = 2
        case 9
        label_14268310c:
            char rax_3 = sub_142690d30(arg1, arg2, rsi)
            sub_142697ce0(*(arg1 + 0x40))
            
            if (rax_3 != 0)
                result = *(arg1 + 0x40)
                *(arg1 + 0x24) = 0xa
                
                if (*(result + 0x10) == 0)
                    goto label_14268313c
                
                result.b = 2
            else
                *(arg1 + 0x24) = 0
                result.b = 0
        case 0xa
        label_14268313c:
            *(arg1 + 0x24) = 0
            char rax_4 = sub_142690e60(arg1, arg2, rsi)
            sub_142697ce0(*(arg1 + 0x40))
            
            if (rax_4 != 0)
                result.b = 1
            else
                result.b = 0
return result
