// 函数: sub_140d1dc20
// 地址: 0x140d1dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i = arg3
char var_58 = 0
char* var_48 = &var_58
void*** (* var_50)() = sub_140884c50
void* rax
int64_t r9
rax, r9 = sub_140a756e0(&var_50, &data_14397f5f0)

if (*(rax + 0x34) == 0)
    sub_140af98a0("Unknown", 0xe8d, 
        Subobjects cannot be created outside of UObject constructors. UObject constructing subobjects "
    "cannot be created using new or placement new operator.", r9)
    sub_140afbb40()

int32_t rcx_1
rcx_1.b = i:4.d == 0

if ((rcx_1.b & sub_140b5b8a0(i.d, 0)) != 0)
    int64_t* rax_2 = sub_140b63b70(&i, &var_50)
    int16_t* const r9_1
    
    if (rax_2[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_2
    
    sub_140af98a0("Unknown", 0xe90, u"Illegal default subobject name: %s", r9_1)
    void*** (* rcx_3)() = var_50
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    sub_140afbb40()

void* rbx_1 = arg1 + 0x20
int32_t r8 = *(rbx_1 + 0x88)
void* rdi = nullptr
int32_t rcx_4 = 0
int64_t* rbx_2

if (r8 s<= 0)
label_140d1dd79:
    rbx_2 = arg5
else
    void* rax_3 = *(rbx_1 + 0x80)
    
    if (rax_3 != 0)
        rbx_1 = rax_3
    
    void* rdx_1 = rbx_1
    
    while (*rdx_1 != i)
        rcx_4 += 1
        rdx_1 += 0x10
        
        if (rcx_4 s>= r8)
            goto label_140d1dd79
    
    if (rcx_4 == 0xffffffff)
        goto label_140d1dd79
    
    rbx_2 = *(rbx_1 + sx.q(rcx_4) * 0x10 + 8)
    
    if (rbx_2 == 0)
        goto label_140d1dd81
    
    if (arg4 == 0)
        goto label_140d1dd7c
    
    int64_t rax_7 = sx.q(*(arg4 + 0x38))
    
    if (rax_7.d s> rbx_2[7].d || *(rbx_2[6] + (rax_7 << 3)) != arg4 + 0x30)
        goto label_140d1dd79

label_140d1dd7c:

if (rbx_2 != 0)
label_140d1dd9b:
    
    if ((*(rbx_2 + 0xcc) & 1) == 0)
        int64_t rbp_1 = rbx_2[0x23]
        
        if (rbp_1 == 0)
            (*(*rbx_2 + 0x390))(rbx_2)
            rbp_1 = rbx_2[0x23]
        
        int32_t r14_2 = (*(arg2 + 8) & 0x69) | 0x40000
        void* rax_10 = sub_140d209c0(arg2)
        int64_t rcx_8 = *(arg1 + 8)
        int64_t* r13 = *(rax_10 + 0x10)
        int32_t r15_1 = *(r13 + 0xcc) & 0x10000080
        void* rsi
        
        if (rcx_8 == 0 || rcx_8 == *(*(arg2 + 0x10) + 0x118) || ((*(arg2 + 8) u>> 4).b & 1) != 0)
            rsi.b = 0
        else
            rsi.b = 1
        
        void* result = sub_140d2dfc0(rbx_2, arg2, i, r14_2, 0, 0, 0, 0, 0)
        
        if (arg7 == 0)
            if (r15_1 == 0)
                void* rbx_3
                void* rsi_1
                
                if (rsi.b != 0)
                label_140d1de80:
                    rbx_3 = arg1
                    void* rax_14 = sub_140cdcfe0(*(rbx_3 + 8), i)
                    rsi_1 = rax_14
                    
                    if (rax_14 != 0)
                        goto label_140d1decb
                    
                    goto label_140d1deb6
                
                rbx_3 = arg1
            label_140d1deb6:
                void* rax_15 = sub_140bdd980(r13, i)
                rsi_1 = rax_15
                
                if (rax_15 != 0)
                label_140d1decb:
                    void* rax_16 = *(rsi_1 + 0x10)
                    int64_t rcx_12 = sx.q(*(arg4 + 0x38))
                    
                    if (rcx_12.d s<= *(rax_16 + 0x38)
                            && *(*(rax_16 + 0x30) + (rcx_12 << 3)) == arg4 + 0x30
                            && rbp_1 != rsi_1)
                        int64_t rbp_2 = sx.q(*(rbx_3 + 0x138))
                        void* rbx_4 = rbx_3 + 0xb0
                        int32_t rax_18 = (rbp_2 + 1).d
                        *(rbx_4 + 0x88) = rax_18
                        
                        if (rax_18 s> *(rbx_4 + 0x8c))
                            sub_140d2b100(rbx_4, rbp_2.d)
                        
                        void* rax_19 = *(rbx_4 + 0x80)
                        
                        if (rax_19 != 0)
                            rbx_4 = rax_19
                        
                        int64_t rcx_15 = rbp_2 << 4
                        void* rcx_16 = rcx_15 + rbx_4
                        
                        if (rcx_15 != neg.q(rbx_4))
                            *rcx_16 = result
                            *(rcx_16 + 8) = rsi_1
            else if (rsi.b != 0)
                goto label_140d1de80
        
        int32_t rax_20 = *(result + 0xc)
        
        if (rax_20 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_20)
            uint32_t rdx_10 = zx.d(temp0_1)
            int32_t rax_22 = temp1_1 + rdx_10
            rdi = *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3))
                + sx.q(zx.d(rax_22.w) - rdx_10) * 0x18
        
        *(rdi + 8) &= 0xdfffffff
        return result
else
label_140d1dd81:
    
    if (arg6 != 0)
        rbx_2 = arg5
        
        if (arg5 != 0)
            goto label_140d1dd9b

return 0
