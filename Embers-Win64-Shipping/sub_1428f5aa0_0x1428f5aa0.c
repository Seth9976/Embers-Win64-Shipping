// 函数: sub_1428f5aa0
// 地址: 0x1428f5aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r13 = 0
int64_t* rsi = nullptr
uint32_t r8 = (sub_142890560(arg1) * 3).d
int32_t temp2
int32_t temp3
temp2:temp3 = muls.dp.d(0x66666667, r8)
int32_t rdx_2 = temp2 s>> 2
int32_t rbx_2 = (rdx_2 u>> 0x1f) + rdx_2 + r8 s/ 0x3e8
int32_t temp4
int32_t temp5
temp4:temp5 = muls.dp.d(0x6bca1af3, rbx_2 + 2)
int32_t rdx_5 = temp4 s>> 3
int64_t r12 = sx.q((rdx_5 u>> 0x1f) + rdx_5 + 1)
uint64_t* rax_6 = sub_1428a6730(r12 << 3)
int16_t* result = sub_1428a6730(sx.q(rbx_2) + 5)

if (result == 0 || rax_6 == 0)
    sub_1428a5670(3, 0x68, 0x41, "crypto\bn\bn_print.c", 0x4b)
else
    int64_t* rax_7 = sub_1428900c0(arg1)
    rsi = rax_7
    
    if (rax_7 != 0)
        void* result_1 = result
        uint64_t* rbx_3 = rax_6
        
        if (sub_142890300(rax_7) == 0)
            if (sub_142890280(rsi) != 0)
                *result = 0x2d
                result_1 = result + 1
            
            if (sub_142890300(rsi) == 0)
                int32_t i
                
                do
                    if ((rbx_3 - rax_6) s>> 3 s>= r12)
                        goto label_1428f5cb6
                    
                    uint64_t rax_14 = sub_1428f50a0(rsi, -0x7538dcfb76180000)
                    *rbx_3 = rax_14
                    
                    if (rax_14 == -1)
                        goto label_1428f5cb6
                    
                    rbx_3 = &rbx_3[1]
                    i = sub_142890300(rsi)
                while (i == 0)
            
            void* rbx_4 = rbx_3 - 8
            int32_t rax_15 =
                sub_1428b7080(result_1, sx.q(rbx_2) + 5 - result_1 + result, "%llu", rbx_3[-1])
            
            if (rax_15 s>= 0)
                void* rdi_1 = result_1 + sx.q(rax_15)
                
                while (rbx_4 != rax_6)
                    int64_t r9_4 = *(rbx_4 - 8)
                    rbx_4 -= 8
                    int32_t rax_17 =
                        sub_1428b7080(rdi_1, sx.q(rbx_2) + 5 - rdi_1 + result, "%019llu", r9_4)
                    
                    if (rax_17 s< 0)
                        goto label_1428f5cb6
                    
                    rdi_1 += sx.q(rax_17)
                
                r13 = 1
        else
            *result = 0x30
            r13 = 1

label_1428f5cb6:
sub_1428a6780(rax_6)
sub_1428901a0(rsi)

if (r13 != 0)
    return result

sub_1428a6780(result)
return nullptr
