// 函数: sub_1426c1d20
// 地址: 0x1426c1d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_110 = arg2
int32_t rbx = -1
int32_t var_108 = 0xffffffff
int32_t var_104 = 0xffffffff
uint64_t result
int512_t zmm4
result, zmm4 = sub_1405b6470(arg1 + 0x148, *(arg1 + 0x150) - *(arg1 + 0x17c), 0)
int64_t r11 = sx.q(*(arg1 + 0x190))

if (r11.d != 0)
    void* rdx_2 = *(arg1 + 0x188)
    void* r8_1 = arg1 + 0x180
    uint32_t r10_2 = (arg2 u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    int32_t rcx_3 = neg.d(r9_2 + r10_2) ^ r9_2 u>> 0xd
    int32_t r10_5 = (r10_2 - r9_2 - rcx_3) ^ rcx_3 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_5 - rcx_3) ^ r10_5 << 0x10
    int32_t rcx_6 = (rcx_3 - r9_5 - r10_5) ^ r9_5 u>> 5
    int32_t r10_8 = (r10_5 - r9_5 - rcx_6) ^ rcx_6 u>> 3
    int32_t r9_8 = (r9_5 - r10_8 - rcx_6) ^ r10_8 << 0xa
    result = r11 - 1
    
    if (rdx_2 != 0)
        r8_1 = rdx_2
    
    rbx = *(r8_1 + (((sx.q(rcx_6 - r9_8 - r10_8) ^ zx.q(r9_8) u>> 0xf) & result) << 2))
    var_104 = rbx
    var_108 = rbx
    
    if (rbx != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x148)
        var_108 = rbx
        
        do
            int64_t rcx_12 = sx.q(rbx) * 3
            result = zx.q(*(rdx_3 + (rcx_12 << 3) + 0x10))
            var_104 = result.d
            
            if (*(rdx_3 + (rcx_12 << 3)) == arg2)
                break
            
            var_108 = result.d
            rbx = result.d
        while (result.d != 0xffffffff)

int64_t* var_100 = arg1 + 0x148
double var_a8[0x2] = var_108.o
int128_t var_b8 = (arg1 + 0x148).o

if (rbx != 0xffffffff)
    int32_t i = var_a8[0]:4.d
    void* rdi_1 = arg1 + 0xf8
    int32_t rbx_1 = var_a8[0].d
    int64_t* r12_1 = var_b8.q
    int32_t* r13_1 = rdi_1 + 0x10
    void* arg_8 = rdi_1
    
    while (true)
        int32_t r11_1 = r13_1[6]
        int32_t rcx_13 = 0
        int32_t r8_2 = 0
        int64_t* var_118
        var_118.d = 0
        var_118:4.d = 1
        int32_t* var_110_1 = r13_1
        int32_t var_108_1 = 0xffffffff
        var_104.q = 0
        
        if (r11_1 != 0)
            int32_t* rax_17 = *(r13_1 + 0x10)
            int32_t* r9_9 = r13_1
            
            if (rax_17 != 0)
                r9_9 = rax_17
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_6 = *r9_9
            
            if (rdx_6 != 0)
            label_1426c1f1b:
                int32_t rax_24 = neg.d(rdx_6) & rdx_6
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_24)
                var_118:4.d = rax_24
                int32_t rax_25
                
                if (rax_24 == 0)
                    rax_25 = 0x20
                else
                    rax_25 = 0x1f - temp0_2
                
                var_104 = r8_2 - rax_25 + 0x1f
                
                if (r8_2 - rax_25 + 0x1f s> r11_1)
                    var_104 = r11_1
            else
                while (true)
                    int64_t rdx_7 = sx.q(rcx_13)
                    r8_2 += 0x20
                    rcx_13 += 1
                    var_100.d = r8_2
                    var_118.d = rcx_13
                    
                    if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_6 = r9_9[rdx_7 + 1]
                    int32_t var_108_2 = 0xffffffff
                    
                    if (rdx_6 != 0)
                        goto label_1426c1f1b
                
                var_104 = r11_1
        
        zmm4.o = 0xffffffff
        void* var_48_1 = rdi_1
        int16_t var_c0_1 = 0
        int128_t var_80_1 = 0xffffffff
        int128_t zmm0
        zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int128_t var_f8 = rdi_1.o
        int128_t var_e8_1 = var_118.o
        int128_t var_50 = zmm0
        
        if (0 s< r11_1)
            int32_t rdi_2 = var_e8_1:0xc.d
            
            while (true)
                int64_t r14_1 = *r12_1
                int64_t rdx_9 = sx.q(rdi_2) << 5
                int64_t rcx_16 = *var_f8.q
                int64_t rax_29 = 0
                
                if (*(rdx_9 + rcx_16 + 0x10) != 0)
                    int64_t* rcx_17 = *(rdx_9 + rcx_16 + 8)
                    
                    if (rcx_17 != 0)
                        void arg_10
                        int64_t* rax_31
                        rax_31, zmm4 = (*(*rcx_17 + 0x30))(rcx_17, &arg_10)
                        rax_29 = *rax_31
                
                if (rax_29 == *(sx.q(rbx_1) * 0x18 + 8 + r14_1))
                    sub_1426bc430(zmm0:8.q, rdi_2)
                else
                    var_e8_1:8.d &= not.d(var_f8:0xc.d)
                    sub_14059bdd0(&var_f8:8)
                    rdi_2 = var_e8_1:0xc.d
                    
                    if (rdi_2 s< *(var_e8_1.q + 0x18))
                        continue
                    else if (var_c0_1.b == 0)
                        break
                
                if (var_c0_1:1.b == 0)
                    break
                
                sub_1426ac380(rdi_1, *(rdi_1 + 8) - *(rdi_1 + 0x34), 1)
                break
            
            rdi_1 = arg_8
        
        result = sub_1405c2fb0(var_a8[1], rbx_1)
        rbx_1 = i
        
        if (i != 0xffffffff)
            int64_t rdx_15 = *r12_1
            
            do
                result = sx.q(rbx_1)
                uint64_t rcx_22 = result * 3
                i = *(rdx_15 + (rcx_22 << 3) + 0x10)
                
                if (*(rdx_15 + (rcx_22 << 3)) == var_b8:8.q)
                    break
                
                rbx_1 = i
            while (i != 0xffffffff)
            
            r12_1 = var_b8.q
        
        if (rbx_1 == 0xffffffff)
            break

return result
