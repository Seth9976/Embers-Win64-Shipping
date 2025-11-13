// 函数: sub_14081fd00
// 地址: 0x14081fd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = *arg2
int64_t rdx = arg2[1]
void* r14 = nullptr
uint64_t var_78 = rbx
int64_t r12 = 0
int64_t var_80 = rdx
int32_t rdi = 0
int16_t rdx_1 = arg2[2].w
int16_t arg_8 = rdx_1
int32_t r9 = *(arg1 + 0x18)
int32_t var_66 = 0xffffffff
int64_t var_60 = 0
int64_t var_58 = 0
int32_t arg_10 = 0

if (r9 == 0)
    goto label_14081fde9

if (sub_1408295a0(*(arg1 + 0x10), &var_78, 0, r9, &arg_10) == 0)
    r12 = var_60
    rbx = var_78
    rdi = arg_10
    arg_8 = rdx_1
    var_80 = rdx
label_14081fde9:
    int32_t rcx_5 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rcx_5 + 1
    
    if (rcx_5 + 1 s> *(arg1 + 0x1c))
        sub_1405c4e40(arg1 + 0x10)
    
    int64_t rdi_2 = sx.q(rdi) << 5
    int64_t rdx_6 = *(arg1 + 0x10) + rdi_2
    memmove(rdx_6 + 0x20, rdx_6, (rcx_5 - arg_10) << 5)
    uint64_t* r15_2 = *(arg1 + 0x10) + rdi_2
    *r15_2 = rbx
    r15_2[1] = var_80
    r15_2[2].w = arg_8
    *(r15_2 + 0x12) = 0xffffffff
    r15_2[3].d = 0xffffffff
    
    if (sub_140834780(&arg2[1]) == 0)
        void* const rbx_1
        
        if (arg2[2].w != 3)
            rbx_1 = arg2[1]
            void* rax_13
            int64_t rax_14
            void* rdx_9
            
            if (rbx_1 != 0)
                rax_13 = sub_140be01c0()
                rdx_9 = *(rbx_1 + 0x10)
                rax_14 = sx.q(*(rax_13 + 0x38))
            
            if (rbx_1 == 0 || rax_14.d s> *(rdx_9 + 0x38)
                    || *(*(rdx_9 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                rbx_1 = nullptr
        else
            rbx_1 = data_143ce3880
        
        void* rax_16 = sub_140d41340()
        int64_t rax_17
        
        if (rax_16 != 0)
            rax_17 = sx.q(*(rax_16 + 0x38))
        
        if (rax_16 == 0 || rax_17.d s> *(rbx_1 + 0x38)
                || *(*(rbx_1 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
            int32_t rax_21 = sub_14075e990(arg2)
            arg_8.d = rax_21
            
            if (*(arg2 + 0x14) == 0xffff)
                if (arg2[1] == 0 || arg2[2].w == 1)
                    *(arg2 + 0x14) = 0
                else
                    *(arg2 + 0x14) = *(sub_140761a70(&arg2[1]) + 0x5c)
            
            r15_2[3].d = *(arg1 + 0x28)
            sub_140820180(arg1 + 0x20, rax_21)
            rbx = zx.q(arg2[4].d)
            int16_t rax_25
            
            if (rbx.d s> 0)
                rax_25 = *(arg2 + 0x12)
                
                if (rax_25 == 0xffff)
                    if (arg2[1] == 0 || arg2[2].w == 1)
                        *(arg2 + 0x12) = 0
                        rax_25 = 0
                    else
                        void* rax_26 = sub_140761a70(&arg2[1])
                        int16_t rcx_20 = *(rax_26 + 0x5c)
                        rax_25 = (*(rax_26 + 0x58) - 1 + rcx_20) & not.w(rcx_20 - 1)
                        *(arg2 + 0x12) = rax_25
            
            int32_t rax_24
            
            if (rbx.d s<= 0 || rbx.d != sx.d(rax_25))
                rax_24.b = 0
            else
                rax_24.b = 1
            
            if (rax_24.b != 0)
                int64_t rcx_22 = sx.q(r15_2[3].d) + *(arg1 + 0x20)
                int64_t rdx_13 = arg2[3]
                
                if (rcx_22 != rdx_13)
                    memcpy(rcx_22, rdx_13, arg_8.d)
        else
            int64_t rdi_3 = sx.q(*(arg1 + 0x48))
            int32_t rax_19 = (rdi_3 + 1).d
            *(arg1 + 0x48) = rax_19
            
            if (rax_19 s> *(arg1 + 0x4c))
                sub_1405a4d70(arg1 + 0x40)
            
            *(*(arg1 + 0x40) + (rdi_3 << 3)) = 0
            r15_2[3].d = rdi_3.d
    else
        rbx = sx.q(*(arg1 + 0x38))
        int32_t rax_9 = (rbx + 1).d
        *(arg1 + 0x38) = rax_9
        
        if (rax_9 s> *(arg1 + 0x3c))
            sub_1405a4d70(arg1 + 0x30)
        
        int64_t* rdx_8 = nullptr
        *(*(arg1 + 0x30) + (rbx << 3)) = 0
        r15_2[3].d = rbx.d
        
        if (arg3 != 0)
            arg_8.q = 0
            
            if (arg2[2].w == 1)
                rdx_8 = arg2[1]
            
            void* rax_11 = sub_140596910(*(arg1 + 8), rdx_8, 0, 9, 0, 0, 0)
            rbx = zx.q(r15_2[3].d)
            r14 = rax_11
        
        *(*(arg1 + 0x30) + (sx.q(rbx.d) << 3)) = r14
    
    if (arg4 != 0)
        int32_t rdx_17 = ((*(arg1 + 0x28) + 0xf) & 0xfffffff0) + 0x10
        
        if (*(arg1 + 0x2c) s< rdx_17 && rdx_17 s> *(arg1 + 0x2c))
            sub_1405c5510(arg1 + 0x20, rdx_17)
        
        sub_140835b50(arg1)
    
    *(arg1 + 0xb4) += 1
    
    if (arg5 != 0)
        *arg5 = r15_2[3].d
    
    rbx.b = 1
else
    if (arg5 != 0)
        *arg5 = *((sx.q(arg_10) << 5) + *(arg1 + 0x10) + 0x18)
    
    r12 = var_60
    rbx.b = 0

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx.b)
