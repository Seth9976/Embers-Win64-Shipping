// 函数: sub_140e32210
// 地址: 0x140e32210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_1 = zx.q(*(arg1 + 0x278) - *(arg1 + 0x2b8))
char* rdx = *(arg1 + 0x3570)
char* r11 = *(arg1 + 0x3578)
void* r10 = *(arg1 + 0x2568)
uint64_t result
void* r9_1

if (r8_1.d s>= 8)
    result = zx.q((r8_1.d & 7) << 3)
    r9_1 = r10 + 0x40 + result
else
    result = zx.q((r8_1 << 3).d)
    r9_1 = sx.q(result.d) + r10

int32_t i_2 = *(arg1 + 0x2508)
int64_t rcx = sx.q(r8_1.d s>> 1 << 3)
void* r15_1 = r10 + 0x80 + rcx
int32_t i_1 = i_2
void* arg_10 = r15_1

if (i_2 s> 0)
    int32_t r13_1 = data_143e29b34
    result = r15_1 - rcx - r10 - 0x80 + r9_1
    uint64_t result_1 = result
    int32_t i
    
    do
        void* rax_6 = result - r15_1
        void* rbx_1 = r15_1 + 0x40
        int64_t j_1 = 4
        int64_t j
        
        do
            uint64_t rcx_3 = zx.q(*(rbx_1 - 0x40))
            uint64_t rax_7 = zx.q(*rbx_1)
            int32_t r10_1 = *(arg1 + (rcx_3 << 2) + 0x2970)
            int32_t r9_3 = *(arg1 + (rax_7 << 2) + 0x2570)
            uint32_t rcx_4 = zx.d(*(rbx_1 + rax_6 - 0x40))
            int32_t r8_6 =
                (*(arg1 + (rax_7 << 2) + 0x2d70) + *(arg1 + (rcx_3 << 2) + 0x3170)) s>> 0x10
            uint32_t rax_23
            
            if (r13_1 != 1)
                uint32_t rax_24 = rcx_4 + r9_3
                
                if (rax_24 u> 0xff)
                    rax_24 = zx.d((not.d(rax_24) s>> 0x1f).b)
                
                *rdx = rax_24.b
                int32_t rax_27 = rcx_4 + r8_6
                
                if (rax_27 u> 0xff)
                    rax_27 = zx.d((not.d(rax_27) s>> 0x1f).b)
                
                rdx[1] = rax_27.b
                uint32_t rax_30 = rcx_4 + r10_1
                
                if (rax_30 u> 0xff)
                    rax_30 = zx.d((not.d(rax_30) s>> 0x1f).b)
                
                rdx[2] = rax_30.b
                rdx[3] = 0xff
                uint32_t rcx_6 = zx.d(*(rbx_1 + rax_6 - 0x38))
                uint32_t rax_33 = rcx_6 + r9_3
                
                if (rax_33 u> 0xff)
                    rax_33 = zx.d((not.d(rax_33) s>> 0x1f).b)
                
                *r11 = rax_33.b
                int32_t rax_36 = rcx_6 + r8_6
                
                if (rax_36 u> 0xff)
                    rax_36 = zx.d((not.d(rax_36) s>> 0x1f).b)
                
                r11[1] = rax_36.b
                rax_23 = rcx_6 + r10_1
            else
                uint32_t rax_8 = rcx_4 + r10_1
                
                if (rax_8 u> 0xff)
                    rax_8 = zx.d((not.d(rax_8) s>> 0x1f).b)
                
                *rdx = rax_8.b
                int32_t rax_11 = rcx_4 + r8_6
                
                if (rax_11 u> 0xff)
                    rax_11 = zx.d((not.d(rax_11) s>> 0x1f).b)
                
                rdx[1] = rax_11.b
                uint32_t rax_14 = rcx_4 + r9_3
                
                if (rax_14 u> 0xff)
                    rax_14 = zx.d((not.d(rax_14) s>> 0x1f).b)
                
                rdx[2] = rax_14.b
                rdx[3] = 0xff
                uint32_t rcx_5 = zx.d(*(rbx_1 + rax_6 - 0x38))
                uint32_t rax_17 = rcx_5 + r10_1
                
                if (rax_17 u> 0xff)
                    rax_17 = zx.d((not.d(rax_17) s>> 0x1f).b)
                
                *r11 = rax_17.b
                int32_t rax_20 = rcx_5 + r8_6
                
                if (rax_20 u> 0xff)
                    rax_20 = zx.d((not.d(rax_20) s>> 0x1f).b)
                
                r11[1] = rax_20.b
                rax_23 = rcx_5 + r9_3
            
            if (rax_23 u> 0xff)
                rax_23 = zx.d((not.d(rax_23) s>> 0x1f).b)
            
            r11[2] = rax_23.b
            r11[3] = 0xff
            uint64_t rcx_7 = zx.q(*(rbx_1 - 0x3f))
            uint64_t rax_41 = zx.q(*(rbx_1 + 1))
            int32_t r10_2 = *(arg1 + (rcx_7 << 2) + 0x2970)
            int32_t r9_4 = *(arg1 + (rax_41 << 2) + 0x2570)
            uint32_t rcx_8 = zx.d(*(rbx_1 + rax_6 - 0x3f))
            int32_t r8_9 =
                (*(arg1 + (rcx_7 << 2) + 0x3170) + *(arg1 + (rax_41 << 2) + 0x2d70)) s>> 0x10
            uint32_t rax_57
            
            if (r13_1 != 1)
                uint32_t rax_58 = rcx_8 + r9_4
                
                if (rax_58 u> 0xff)
                    rax_58 = zx.d((not.d(rax_58) s>> 0x1f).b)
                
                rdx[4] = rax_58.b
                int32_t rax_61 = rcx_8 + r8_9
                
                if (rax_61 u> 0xff)
                    rax_61 = zx.d((not.d(rax_61) s>> 0x1f).b)
                
                rdx[5] = rax_61.b
                uint32_t rax_64 = rcx_8 + r10_2
                
                if (rax_64 u> 0xff)
                    rax_64 = zx.d((not.d(rax_64) s>> 0x1f).b)
                
                rdx[6] = rax_64.b
                rdx[7] = 0xff
                uint32_t rcx_10 = zx.d(*(rbx_1 + rax_6 - 0x37))
                uint32_t rax_67 = rcx_10 + r9_4
                
                if (rax_67 u> 0xff)
                    rax_67 = zx.d((not.d(rax_67) s>> 0x1f).b)
                
                r11[4] = rax_67.b
                int32_t rax_70 = rcx_10 + r8_9
                
                if (rax_70 u> 0xff)
                    rax_70 = zx.d((not.d(rax_70) s>> 0x1f).b)
                
                r11[5] = rax_70.b
                rax_57 = rcx_10 + r10_2
            else
                uint32_t rax_42 = rcx_8 + r10_2
                
                if (rax_42 u> 0xff)
                    rax_42 = zx.d((not.d(rax_42) s>> 0x1f).b)
                
                rdx[4] = rax_42.b
                int32_t rax_45 = rcx_8 + r8_9
                
                if (rax_45 u> 0xff)
                    rax_45 = zx.d((not.d(rax_45) s>> 0x1f).b)
                
                rdx[5] = rax_45.b
                uint32_t rax_48 = rcx_8 + r9_4
                
                if (rax_48 u> 0xff)
                    rax_48 = zx.d((not.d(rax_48) s>> 0x1f).b)
                
                rdx[6] = rax_48.b
                rdx[7] = 0xff
                uint32_t rcx_9 = zx.d(*(rbx_1 + rax_6 - 0x37))
                uint32_t rax_51 = rcx_9 + r10_2
                
                if (rax_51 u> 0xff)
                    rax_51 = zx.d((not.d(rax_51) s>> 0x1f).b)
                
                r11[4] = rax_51.b
                int32_t rax_54 = rcx_9 + r8_9
                
                if (rax_54 u> 0xff)
                    rax_54 = zx.d((not.d(rax_54) s>> 0x1f).b)
                
                r11[5] = rax_54.b
                rax_57 = rcx_9 + r9_4
            
            if (rax_57 u> 0xff)
                rax_57 = zx.d((not.d(rax_57) s>> 0x1f).b)
            
            r11[6] = rax_57.b
            rdx = &rdx[8]
            r11[7] = 0xff
            rbx_1 += 2
            r11 = &r11[8]
            j = j_1
            j_1 -= 1
        while (j != 1)
        r15_1 = arg_10 + 0x100
        result = result_1 + 0x100
        i = i_1 - 1
        arg_10 = r15_1
        result_1 = result
        i_1 = i
    while (i s> 0)

return result
