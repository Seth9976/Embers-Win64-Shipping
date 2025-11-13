// 函数: sub_141801c00
// 地址: 0x141801c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t entry_zmm2
int64_t zmm6 = sub_142c521c0(arg1[0xb], 0x2774, 0, entry_zmm2)
uint64_t rcx_2 = sub_141800460(arg1)
int64_t r14 = 0
bool z

if (0 == *(arg1 + 0x8c))
    *(arg1 + 0x8c) = 0
    z = true
else
    *(arg1 + 0x8c)
    z = false

if (not(z))
    rcx_2 = arg1[0x14]
    
    if (rcx_2 != 0)
        int64_t var_38_1 = zmm6
        int32_t rax_2
        rax_2.b = arg1[0x13].d == 0
        *(rcx_2 + 0x9c) = rax_2
        int64_t var_a8
        var_a8.d = 0
        
        if (sub_142c520d0(arg1[0xb], 0x200002, &var_a8) == 0)
            *(arg1[0x14] + 0x90) = var_a8.d
        
        void* rcx_5 = arg1[0xb]
        int64_t var_90 = (zx.o(0)).q
        int32_t rax_5
        int64_t zmm6_1
        rax_5, zmm6_1 = sub_142c520d0(rcx_5, 0x30000f, &var_90)
        int64_t zmm0_1
        
        if (rax_5 == 0)
            zmm0_1 = var_90
        
        if (rax_5 != 0 || zmm0_1 f< zmm6_1)
            void* rcx_6 = arg1[0x14]
            int32_t rax_7 = 0
            
            if (0 == *(rcx_6 + 0x20))
                *(rcx_6 + 0x20) = 0
            else
                rax_7 = *(rcx_6 + 0x20)
            
            rcx_2 = arg1[0x14]
            *(rcx_2 + 0x94) = rax_7
        else
            rcx_2 = zx.q(int.d(zmm0_1))
            *(arg1[0x14] + 0x94) = rcx_2.d
        
        void* rax_8 = arg1[0x14]
        
        if (*(rax_8 + 0x90) s<= 0)
            *(rax_8 + 0x9c) = 0

void* rax_9 = arg1[0x14]

if (rax_9 != 0)
    rcx_2 = sub_1417ff7a0(arg1)
    *(arg1[0x14] + 0x98) = 1
    rax_9 = arg1[0x14]

int32_t result

if (rax_9 == 0 || *(rax_9 + 0x9c) == 0)
    int32_t rcx_22
    
    if (arg1[0x11].b == 0)
        bool z_1
        
        if (0 == *(arg1 + 0x8c))
            *(arg1 + 0x8c) = 0
            z_1 = true
        else
            *(arg1 + 0x8c)
            z_1 = false
        
        if (z_1)
            rcx_22 = sbb.d(rcx_2.d, rcx_2.d, arg1[0x23].b != 0) + 3
        else
            int32_t rcx_23
            rcx_23.b = arg1[0x13].d - 5 u<= 2
            rcx_22 = rcx_23 + 2
    else
        rcx_22 = 2
    
    *(arg1 + 0xbc) = rcx_22
    int64_t var_58 = arg1[0x14]
    void* rax_33 = arg1[0x15]
    void* var_50_1 = rax_33
    
    if (rax_33 != 0)
        *(rax_33 + 8) += 1
    
    int64_t* rbx_4 = arg1[2]
    int64_t rsi_4 = 0
    
    if (rbx_4 != 0)
        int32_t rax_34 = rbx_4[1].d
        
        if (rax_34 != 0)
            rbx_4[1].d = rax_34 + 1
            rax_34.b = 1
        
        if (rax_34.b == 0)
            rbx_4 = nullptr
        
        if (rbx_4 != 0)
            int32_t rax_35 = rbx_4[1].d
            rsi_4 = arg1[1]
            rbx_4[1].d = rax_35
            
            if (rax_35 == 0)
                (**rbx_4)(rbx_4)
                int32_t temp7_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t var_48 = rsi_4
    int64_t* var_40_1 = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    sub_141801670((*(*arg1 + 0x90))(arg1), &var_48, &var_58, 0)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t var_a0
    result = &var_a0
    int64_t* var_98 = nullptr
    
    if (&arg1[0x14] != &var_a0)
        arg1[0x14] = 0
        var_a0 = 0
        result = sub_1405aeff0(&arg1[0x15], &var_98)
        int64_t* rcx_32 = var_98
        
        if (rcx_32 != 0)
            result = rcx_32[1].d
            rcx_32[1].d -= 1
            
            if (result == 1)
                int64_t* rbx_5 = var_98
                result = (**rbx_5)(rbx_5)
                int32_t rdi_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t* rcx_34 = var_98
                    return (*(*rcx_34 + 8))(rcx_34, zx.q(rdi_1))
else
    int64_t* rcx_8 = arg1[0x14]
    
    if ((*(*rcx_8 + 0x40))(rcx_8) s>= 0x1f4)
        int64_t* rcx_9 = arg1[0x14]
        
        if ((*(*rcx_9 + 0x40))(rcx_9) s<= 0x1f7)
            int64_t* rcx_10 = arg1[0x14]
            int64_t* var_88
            (*(*rcx_10 + 0x18))(rcx_10, &var_88)
            int32_t rbx_1 = 0
            int32_t i_1
            
            while (true)
                int32_t i_2
                i_1 = i_2
                
                if (rbx_1 s< 0)
                    break
                
                if (rbx_1 s>= i_1)
                    break
                
                int64_t* rsi_3 = &var_88[sx.q(rbx_1) * 2]
                
                if (sub_140a32ae0(rsi_3, u"Authorization", 1) == 0)
                    sub_140a32ae0(rsi_3, u"Set-Cookie", 1)
                
                rbx_1 += 1
            
            int64_t* rbx_2 = var_88
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t rcx_13 = *rbx_2
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    rbx_2 = &rbx_2[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rbx_2 = var_88
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
    
    *(arg1 + 0xbc) = 4
    sub_1417ff7a0(arg1)
    int64_t var_78 = arg1[0x14]
    void* rax_19 = arg1[0x15]
    void* var_70_1 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    int64_t* rbx_3 = arg1[2]
    
    if (rbx_3 != 0)
        int32_t rax_20 = rbx_3[1].d
        
        if (rax_20 != 0)
            rbx_3[1].d = rax_20 + 1
            rax_20.b = 1
        
        if (rax_20.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            int32_t rax_21 = rbx_3[1].d
            r14 = arg1[1]
            rbx_3[1].d = rax_21
            
            if (rax_21 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp8_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t var_68 = r14
    int64_t* var_60_1 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    result = sub_141801670((*(*arg1 + 0x90))(arg1), &var_68, &var_78, 1)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp5_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rbx_3 + 8))(rbx_3, 1)

return result
