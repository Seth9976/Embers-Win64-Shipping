// 函数: sub_141ebd580
// 地址: 0x141ebd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    r14 = *(arg1 + 0x20)

int64_t* rsi

if (r14 == 0)
    rsi = nullptr
else
    void* rbx_1 = r14[0x53]
    
    if (rbx_1 == 0)
        rsi = nullptr
    else
        void* rax_2 = sub_142531230()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rsi = nullptr
        else
            void* rax_5 = *(rbx_1 + 0x70)
            
            if (rax_5 == 0)
                rsi = nullptr
            else
                rsi = *(rax_5 + 0x40)

int16_t* const r8_2

if (arg2[1].d == 0)
    r8_2 = &data_142d40450
else
    r8_2 = *arg2

int16_t* var_a8
sub_140a2e390(&var_a8, u"CheatScript.%s", r8_2)
int16_t* const rdx_1 = &data_142d40450
int32_t var_a0

if (var_a0 != 0)
    rdx_1 = var_a8

int64_t* result = sub_140af5690(data_143ddb400, rdx_1, 0, 1, &data_143de5830)
int16_t* rcx_3 = var_a8
int64_t* result_1 = result

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

if (result_1 != 0)
    void* r9_1 = &result_1[2]
    int32_t result_2 = *(r9_1 + 0x18)
    int32_t rcx_4 = 0
    int32_t var_98 = 0
    int32_t result_3 = 0
    int32_t var_94_1 = 1
    int32_t r8_3 = 0
    void* var_90_1 = r9_1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (result_2 != 0)
        void* rax_6 = *(r9_1 + 0x10)
        result_3 = result_2
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result_2 - 1)
        int32_t rdx_4 = *r9_1
        result = zx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        
        if (rdx_4 != 0)
        label_141ebd6f8:
            int32_t rax_12 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_94_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            result = zx.q(r8_3 - rax_13 + 0x1f)
            
            if (result.d s> result_2)
                result = zx.q(result_2)
            
            result_3 = result.d
            var_84_1.d = result.d
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_4)
                r8_3 += 0x20
                rcx_4 += 1
                var_84_1:4.d = r8_3
                var_98 = rcx_4
                
                if (rdx_5.d s>= result.d)
                    var_84_1.d = result_2
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141ebd6f8
    
    double zmm2_1[0x2] = var_88_1.o
    int128_t var_38_1 = var_98.o
    double var_28_1[0x2] = zmm2_1
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int128_t var_78 = result_1.o
    int96_t var_68_1 = var_38_1:8.12
    
    if (result_3 s< result_2)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rdi_1 = var_78.q
            
            if (rsi != 0)
                void* rdx_8 = sx.q(i) * 0x30 + *rdi_1
                int32_t rax_15 = *(rdx_8 + 0x20)
                void* rcx_6 = rdx_8 + 0x18
                
                if (rax_15 == 0 || rax_15 - 1 s<= 0)
                    rcx_6 = rdx_8 + 8
                
                int16_t* const r8_5
                
                if (*(rcx_6 + 8) == 0)
                    r8_5 = &data_142d40450
                else
                    r8_5 = *rcx_6
                
                int64_t var_50
                sub_140a2e390(&var_50, u"> %s", r8_5)
                (*(*rsi + 0x280))(rsi, &var_50)
                int64_t rcx_9 = var_50
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
            
            void* rdx_12 = sx.q(i) * 0x30 + *rdi_1
            int32_t rax_19 = *(rdx_12 + 0x20)
            void* rdi_2 = rdx_12 + 0x18
            
            if (rax_19 == 0 || rax_19 - 1 s<= 0)
                rdi_2 = rdx_12 + 8
            
            int16_t* rdi_3
            
            if (*(rdi_2 + 8) == 0)
                rdi_3 = &data_142d40450
            else
                rdi_3 = *rdi_2
            
            var_a8 = nullptr
            int32_t rdx_13 = 0
            int32_t var_a0_1 = 0
            int32_t rcx_10 = 0
            int32_t var_9c_1 = 0
            
            if (rdi_3 != 0 && *rdi_3 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (rdi_3[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_a8, rbx_2.d + 1)
                    rcx_10 = var_9c_1
                    rdx_13 = var_a0_1
                
                int32_t rax_21 = rbx_2.d + 1 + rdx_13
                int32_t var_a0_2 = rax_21
                
                if (rax_21 s> rcx_10)
                    sub_140594770(&var_a8)
                
                UnDecorator::getReferenceType(var_a8, rdi_3, (rbx_2.d + 1) * 2)
            
            r9_1.b = 1
            (*(*r14 + 0xc20))(r14, &var_98, &var_a8, r9_1)
            int64_t rcx_15 = var_98.q
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            int16_t* rcx_16 = var_a8
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
            result = var_68_1.q
            i = i_1
        while (i s< result[3].d)

int64_t rcx_18 = *arg2

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
