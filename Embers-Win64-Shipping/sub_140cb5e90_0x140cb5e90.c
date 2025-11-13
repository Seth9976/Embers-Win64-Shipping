// 函数: sub_140cb5e90
// 地址: 0x140cb5e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int64_t r13 = sx.q(arg2)
int32_t arg_10 = 0
arg_10.b = 0
int32_t* var_60 = &arg_10
void*** (* var_68)() = sub_140884c50
void* rax_1 = *(sub_140a756e0(&var_68, &data_14397f5f0) + 0x48)
int64_t rcx_1 = *(rax_1 + 0x98)
int32_t rcx_2 = *(rax_1 + 0x90)
*(rax_1 + 0x98) = arg1
*(rax_1 + 0x90) = r13.d
int32_t* r14_1 = r13 * 0x38 + *(arg1 + 8)
double zmm2[0x2] = sub_140ba0c20(arg1, r13.d)
void* const r9 = *(r14_1 + 0x20)

if (r9 != 0)
    int32_t rax_2 = *(r9 + 0xc)
    void* const rax_8
    
    if (rax_2 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1c).b & 1) != 0)
        *(r14_1 + 0x20) = 0
        r9 = nullptr

if (r9 != 0)
    result = *(r14_1 + 0x20)
else
    int32_t rcx_8
    rcx_8.b = sub_140b5b8a0(*r14_1, 0) == 0
    
    if ((r14_1[1] != 0 | rcx_8.b) == 0)
        result = *(r14_1 + 0x20)
    else
        arg_10.b = 0
        int32_t* var_60_1 = &arg_10
        var_68 = sub_140884c50
        void* rax_12
        int512_t zmm0_1
        int512_t zmm1_1
        rax_12, zmm0_1, zmm1_1 = sub_140a756e0(&var_68, &data_14397f5f0)
        void* r12_1 = *(rax_12 + 0x48)
        int64_t var_58
        void* arg_18
        
        if (data_143de5426 != 0)
        label_140cb623f:
            
            if (*(r14_1 + 0x20) != 0)
                result = *(r14_1 + 0x20)
            else
                if (*(r14_1 + 0x28) == 0)
                    zmm2 = sub_140cd0ad0(arg1, r13.d, zmm0_1, zmm1_1)
                else if (data_143de5452 == 0 && sub_140baa940() == 0)
                    sub_140baa940()
                
                int32_t rdx_20 = r14_1[0xc]
                
                if (rdx_20 != 0xffffffff)
                    *(r14_1 + 0x20) = sub_140cb4600(*(r14_1 + 0x28), rdx_20, zmm2)
                    *(r12_1 + 4) += 1
                    arg_18 = arg1
                    void* rax_32 = sub_140cdbb20()
                    EnterCriticalSection(rax_32 + 0xd0)
                    sub_140ca9be0(rax_32 + 0x80, &arg_10, &arg_18, nullptr)
                    
                    if (rax_32 != -0xd0)
                        LeaveCriticalSection(rax_32 + 0xd0)
                
                if (*(r14_1 + 0x20) == 0)
                    int32_t r8_10 = r14_1[2]
                    int64_t* rax_33
                    int32_t rbx_7
                    
                    if (r8_10 != 0)
                        rbx_7 = 8
                        
                        if (r8_10 s< 0)
                            sub_140cbc5d0(arg1, &var_68, not.d(r8_10))
                        else if (r8_10 s<= 0)
                            var_68 = nullptr
                            int64_t var_60_3 = 0
                        else
                            sub_140cbb960(arg1, &var_68, r8_10 - 1, 0, 0)
                        
                        rax_33 = &var_68
                    else
                        rbx_7 = r8_10 + 4
                        rax_33 = sub_140d21830(*(arg1 + 0xa0), &var_58, 0, 0)
                    
                    int64_t rdi_6 = *rax_33
                    *rax_33 = 0
                    rax_33[1] = 0
                    
                    if ((rbx_7.b & 8) != 0)
                        void*** (* rcx_41)() = var_68
                        rbx_7 &= 0xfffffff7
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                    
                    if ((rbx_7.b & 4) != 0)
                        int64_t rcx_42 = var_58
                        
                        if (rcx_42 != 0)
                            sub_140a74f90(rcx_42)
                    
                    if (rdi_6 != 0)
                        sub_140a74f90(rdi_6)
                
                result = *(r14_1 + 0x20)
        else
            int64_t rax_13
            rax_13, zmm0_1, zmm1_1, zmm2 = sub_140b92fc0(0, *(r14_1 + 0xc), 0, 0, 0)
            
            if (rax_13 == 0)
                goto label_140cb623f
            
            int32_t var_88_1 = 0
            int64_t* rax_15
            rax_15, zmm0_1, zmm1_1, zmm2 =
                sub_140d2f0c0(sub_140bdf2e0(), rax_13, *(r14_1 + 0x14), 0, 0, 0)
            
            if (rax_15 == 0)
                goto label_140cb623f
            
            double zmm2_1[0x2] = sub_140cc45a0(arg1 + 0x200, rax_15)
            
            if (rax_15[0x23] == 0)
                int64_t rdx_7 = *rax_15
                (*(rdx_7 + 0x390))(rax_15, rdx_7)
            
            int32_t rax_16 = r14_1[2]
            void* rbx_2
            
            if (rax_16 == 0)
                int64_t* rax_17 = sub_140b63b70(r14_1, &var_58)
                int16_t* rdx_9
                
                if (rax_17[1].d == 0)
                    rdx_9 = &data_142d40450
                else
                    rdx_9 = *rax_17
                
                void* rax_18
                rax_18, zmm0_1, zmm1_1, zmm2 = sub_140d1dfb0(nullptr, rdx_9)
                int64_t rcx_14 = var_58
                rbx_2 = rax_18
                
                if (rcx_14 != 0)
                    zmm0_1, zmm1_1 = sub_140a74f90(rcx_14)
                
                goto label_140cb61f0
            
            int32_t rdx_12
            void* rbx_3
            
            if (rax_16 s< 0)
                int32_t* rcx_16 = sx.q(not.d(rax_16)) * 0x38 + *(arg1 + 8)
                rbx_3 = *(rcx_16 + 0x20)
                
                if (rbx_3 == 0)
                    if (rcx_16[2] != 0)
                        rdx_12 = r14_1[2]
                        goto label_140cb60ef
                    
                    int64_t* rax_21 = sub_140b63b70(rcx_16, &var_58)
                    int16_t* rdx_11
                    
                    if (rax_21[1].d == 0)
                        rdx_11 = &data_142d40450
                    else
                        rdx_11 = *rax_21
                    
                    void* rax_22 = sub_140d1dfb0(nullptr, rdx_11)
                    int64_t rcx_17 = var_58
                    rbx_3 = rax_22
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    goto label_140cb60f2
                
            label_140cb61b4:
                void* rax_25
                rax_25, zmm0_1, zmm1_1, zmm2 = sub_140ba70b0(rax_15, rbx_3, *r14_1)
                rbx_2 = rax_25
                
                if (rax_25 == 0)
                    goto label_140cb623f
                
                void* rax_26
                rax_26, zmm0_1 = sub_140bdf670()
                void* rdx_17 = *(rbx_2 + 0x10)
                int64_t rax_27 = sx.q(*(rax_26 + 0x38))
                
                if (rax_27.d s<= *(rdx_17 + 0x38)
                        && *(*(rdx_17 + 0x30) + (rax_27 << 3)) == rax_26 + 0x30)
                    if ((*(rbx_2 + 0xcc) & 0x20000000) == 0 || rbx_2 == 0)
                        goto label_140cb623f
                    
                    goto label_140cb61f5
                
            label_140cb61f0:
                
                if (rbx_2 == 0)
                    goto label_140cb623f
                
            label_140cb61f5:
                *(r14_1 + 0x20) = rbx_2
                *(r12_1 + 4) += 1
                void* arg_20 = arg1
                void* rax_29 = sub_140cdbb20()
                EnterCriticalSection(rax_29 + 0xd0)
                zmm0_1, zmm1_1 = sub_140ca9be0(rax_29 + 0x80, &arg_18, &arg_20, nullptr)
                
                if (rax_29 != -0xd0)
                    LeaveCriticalSection(rax_29 + 0xd0)
                
                goto label_140cb623f
            
            rdx_12 = rax_16
        label_140cb60ef:
            rbx_3 = sub_140cc12f0(arg1, rdx_12, zmm2_1)
        label_140cb60f2:
            
            if (rbx_3 != 0)
                goto label_140cb61b4
            
            int32_t r8_3 = r14_1[2]
            void*** (** rax_24)()
            int32_t rbx_4
            
            if (r8_3 != 0)
                rbx_4 = 2
                
                if (r8_3 s< 0)
                    sub_140cbc5d0(arg1, &var_68, not.d(r8_3))
                else if (r8_3 s<= 0)
                    var_68 = nullptr
                    int64_t var_60_2 = 0
                else
                    sub_140cbb960(arg1, &var_68, r8_3 - 1, 0, 0)
                
                rax_24 = &var_68
            else
                rbx_4 = r8_3 + 1
                rax_24 = sub_140d21830(*(arg1 + 0xa0), &var_58, 0, 0)
            
            void*** (* rdi_3)() = *rax_24
            *rax_24 = nullptr
            rax_24[1] = 0
            
            if ((rbx_4.b & 2) != 0)
                void*** (* rcx_22)() = var_68
                rbx_4 &= 0xfffffffd
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
            
            if ((rbx_4.b & 1) != 0)
                int64_t rcx_23 = var_58
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
            
            if (rdi_3 != 0)
                sub_140a74f90(rdi_3)

*(rax_1 + 0x98) = rcx_1
*(rax_1 + 0x90) = rcx_2
return result
