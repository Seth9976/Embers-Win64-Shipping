// 函数: sub_14194ffc0
// 地址: 0x14194ffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143eff810)
int32_t arg_8
sub_14193a5e0(arg1 + 0x90, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x88 + *(arg1 + 0x90)

int64_t* rdx_1 = rax_2 + 0x78

if (rax_2 == 0)
    rdx_1 = nullptr

int64_t* rbx

if (rdx_1 != 0)
    void* rdx_2 = *rdx_1
    rbx = *(rdx_2 + 0x88)
    
    if (rbx != 0)
        int32_t rax_3 = 0
        bool z_1
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_1 = true
        else
            rax_3 = rbx[1].d
            z_1 = false
        
        if (z_1)
        label_141950065:
            rbx = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_3 == rbx[1].d)
                    rbx[1].d = rax_3 + 1
                    z_2 = true
                else
                    rbx[1].d
                    z_2 = false
                
                if (z_2)
                    break
                
                rax_3 = 0
                bool z_3
                
                if (0 == rbx[1].d)
                    rbx[1].d = 0
                    z_3 = true
                else
                    rax_3 = rbx[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141950065
    
    if (*(rdx_2 + 0xa4) != 4)
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rdi_2 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*rbx + 8))(rbx, zx.q(rdi_2))
        
        rbx.b = 0
    else
        *arg2 = *(rdx_2 + 0xa8)
        *(rdx_2 + 0xa8) = 0
        *(rdx_2 + 0xa4) = 5
        
        if (rbx == 0)
            rbx.b = 1
        else
            rbx[1].d -= 1
            
            if (rbx[1].d != 1)
                rbx.b = 1
            else
                (**rbx)(rbx)
                int32_t rdi_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rdi_1 != 1)
                    rbx.b = 1
                else
                    (*(*rbx + 8))(rbx, zx.q(rdi_1))
                    rbx = zx.q(rdi_1.b)
else if (*(arg1 + 0x1c8) != 2)
    rbx.b = 0
else
    int32_t var_38
    sub_14193a5e0(arg1 + 0x170, &var_38, arg3)
    int64_t rax_13 = sx.q(var_38)
    void* const rax_15
    
    if (rax_13.d == 0xffffffff)
        rax_15 = nullptr
    else
        rax_15 = rax_13 * 0x88 + *(arg1 + 0x170)
    
    rbx = rax_15 + 0x78
    
    if (rax_15 == 0)
        rbx = nullptr
    
    if (rbx == 0)
        rbx.b = 0
    else
        int32_t rcx_7 = *(*rbx + 0x7c)
        int32_t rax_17 = arg4[1].d
        
        if (rcx_7 s> rax_17)
            arg4[1].d = rcx_7
            
            if (rcx_7 s> *(arg4 + 0xc))
                sub_1405daba0(arg4)
        else if (rcx_7 s< rax_17 && rcx_7 != rax_17)
            arg4[1].d = rcx_7
            sub_1405dac10(arg4)
        
        int64_t* rcx_10 = *(arg1 + 0x168)
        int64_t r8_2 = *rcx_10
        (*(r8_2 + 0x178))(rcx_10, zx.q(*(*rbx + 0x78)), r8_2)
        int64_t* rcx_11 = *(arg1 + 0x168)
        int64_t r9 = *rcx_11
        (*(r9 + 0x150))(rcx_11, *arg4, zx.q(*(*rbx + 0x7c)), r9)
        
        if (sub_1419358e0(arg2, arg4) == 0)
            void var_30
            sub_140926420(&data_143f02598, 
                sub_140b58170(&var_30, "FailedBinaryProgramCreateFromOldCache", 1))
            int64_t* var_28
            int64_t** rax_22 = sub_14194e5d0(arg3, &var_28)
            int64_t* r9_1
            
            if (rax_22[1].d == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *rax_22
            
            sub_140af98a0("Unknown", 0x1327, 
                UseCachedProgram : Failed to create GL program from binary data while "
            "BuildingCacheFileWithMove! [%s]", r9_1)
            int64_t* rcx_15 = var_28
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            sub_140afbb40()
        
        int64_t* rdx_12 = *(arg1 + 0x148)
        data_143eff66c += 1
        sub_1419304c0(arg1, rdx_12, arg4, arg3)
        *(arg1 + 0x1c0) += 1
        rbx.b = 1

LeaveCriticalSection(&data_143eff810)
return zx.q(rbx.b)
