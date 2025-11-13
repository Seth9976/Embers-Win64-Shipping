// 函数: sub_140aeaee0
// 地址: 0x140aeaee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_14399ff00
int32_t r10_1 = data_14399ff0c + 1
int64_t r14
r14.b = 0
data_14399ff0c = r10_1
int64_t rdi = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp0_1
    
    do
        int64_t rax_1 = data_14399fef8
        
        if (*(rbx_2 + rax_1 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx = *(rbx_2 + rax_1)
            
            if (rcx == 0)
                r14.b = 1
            else
                int64_t var_a8
                var_a8.b = arg4
                
                if ((*(*rcx + 0x50))(rcx, arg1, arg2, zx.q(arg3), var_a8) == 0)
                    r14.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    r10_1 = data_14399ff0c
    rdx = data_14399ff00

int64_t* rdi_1 = nullptr
data_14399ff0c = r10_1 - 1

if (r14.b != 0 && r10_1 - 1 s<= 0)
    int32_t r14_1 = rdx
    int32_t rbx_3 = 0
    
    if (rdx s> 0)
        do
            int64_t rax_4 = data_14399fef8
            
            if (*(rdi_1 + rax_4 + 8) == 0)
                sub_1405a4880(&data_14399fef8, rbx_3, 1, 1)
            else
                int64_t* rcx_1 = *(rdi_1 + rax_4)
                
                if (rcx_1 == 0)
                    sub_1405a4880(&data_14399fef8, rbx_3, 1, 1)
                else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                    sub_1405a4880(&data_14399fef8, rbx_3, 1, 1)
                else
                    rbx_3 += 1
                    rdi_1 = &rdi_1[2]
            
            rdx = data_14399ff00
        while (rbx_3 s< rdx)
    
    int32_t rax_7 = rdx * 2
    
    if (rax_7 s<= 2)
        rax_7 = 2
    
    data_14399ff08 = rax_7
    
    if (r14_1 s> rax_7 && data_14399ff04 != rdx)
        sub_1405a5410(&data_14399fef8, rdx)

int16_t* var_98 = nullptr
int32_t rdx_3 = 0
int32_t var_90 = 0
int32_t rcx_2 = 0
int32_t var_8c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_4 = -1
    
    do
        rbx_4 += 1
    while (arg2[rbx_4] != 0)
    
    if (rbx_4.d + 1 s> 0)
        sub_1405947f0(&var_98, rbx_4.d + 1)
        rcx_2 = var_8c
        rdx_3 = var_90
    
    int32_t rax_8 = rdx_3 + rbx_4.d + 1
    var_90 = rax_8
    
    if (rax_8 s> rcx_2)
        sub_140594770(&var_98)
    
    UnDecorator::getReferenceType(var_98, arg2, (rbx_4.d + 1) * 2)

int64_t* result = sub_140af5690(data_143ddb400, arg1, 0, 1, &var_98)
int16_t* rcx_7 = var_98
int64_t* result_1 = result

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

if (result_1 != 0)
    int32_t r10_3 = result_1[5].d
    void* r9_1 = &result_1[2]
    var_98:4.d = 1
    int32_t rcx_8 = 0
    var_98.d = 0
    int32_t r8_3 = 0
    var_90.q = r9_1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r10_3 != 0)
        void* rax_9 = *(r9_1 + 0x10)
        
        if (rax_9 != 0)
            r9_1 = rax_9
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r10_3 - 1)
        int32_t rdx_9 = *r9_1
        
        if (rdx_9 != 0)
        label_140aeb148:
            int32_t rax_16 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
            var_98:4.d = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_2
            
            var_84_1.d = r8_3 - rax_17 + 0x1f
            
            if (r8_3 - rax_17 + 0x1f s> r10_3)
                var_84_1.d = r10_3
        else
            while (true)
                int64_t rdx_10 = sx.q(rcx_8)
                r8_3 += 0x20
                rcx_8 += 1
                var_84_1:4.d = r8_3
                var_98.d = rcx_8
                
                if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_140aeb148
            
            var_84_1.d = r10_3
    
    double zmm2_1[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2_1
    int96_t zmm1_1 = var_98.o[1].12
    double var_78[0x2] = result_1.o
    result = zmm2_1[0] u>> 0x20
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int96_t var_68_1 = zmm1_1
    
    if (result.d s< r10_3)
        int32_t i_1
        int32_t i = i_1
        
        do
            double rbx_6 = var_78[0]
            int64_t rdi_3 = sx.q(i) * 0x30
            sub_140b5e690(*rbx_6 + rdi_3, &var_98)
            int64_t* r8_5 = 0x18
            void* rdx_13 = *rbx_6 + rdi_3
            int32_t rax_21 = *(rdx_13 + 0x20)
            int32_t rcx_12 = rax_21 - 1
            
            if (rax_21 == 0)
                rcx_12 = 0
            
            if (rcx_12 s<= 0)
                r8_5 = 8
            
            int16_t* const r8_6
            
            if (*(r8_5 + rdx_13 + 8) == 0)
                r8_6 = &data_142d40450
            else
                r8_6 = *(r8_5 + rdx_13)
            
            int16_t* const rdx_14 = &data_142d40450
            int64_t* var_a8_1
            var_a8_1.b = arg4
            
            if (var_90 != 0)
                rdx_14 = var_98
            
            sub_140afa9b0(arg2, rdx_14, r8_6, arg3, var_a8_1.b)
            int16_t* rcx_14 = var_98
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            var_68_1:8.d &= not.d(var_78[1]:4.d)
            sub_14059bdd0(&var_78[1])
            result = var_68_1.q
            i = i_1
        while (i s< result[3].d)

return result
