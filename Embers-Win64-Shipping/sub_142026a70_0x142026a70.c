// 函数: sub_142026a70
// 地址: 0x142026a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
char arg_18 = 0

if (sub_1424b2a30(arg1, arg2) != 0)
    return 0

int64_t* rcx = *(*(arg2 + 0x228) + 0x258)
char rax_3

if (rcx != 0)
    rax_3 = (*(*rcx + 0x28))(rcx)
    arg_18 = 1

if (rcx == 0 || rax_3 == 0)
    arg_18 = 0

int64_t* rcx_3 = *(arg2 + 0x228)
uint64_t rdi = 0
uint64_t var_70 = 0
int32_t rax_4 = rcx_3[0x49].d
int64_t* rbx = rcx_3[0x48]
int32_t arg_20 = rax_4

if (rax_4 != 0)
    sub_1405a4c70(&var_70, rax_4, 0)
    rdi = var_70
    memcpy(rdi, rbx, rax_4 * 2)
    rcx_3 = *(arg2 + 0x228)
    arg_20 = rax_4

uint64_t var_60
sub_1422a12b0(rcx_3, &var_60)
int32_t rsi = 0

if (arg1[0x5e].d s<= 0)
label_142026e58:
    rbx.b = 0
else
    int32_t r12_1 = 1
    int64_t rbp_1 = 0
    
    while (true)
        int64_t* r9_1 = arg1[0x5d]
        rbx = *(r9_1 + rbp_1)
        void* const rax_10
        
        if (rbx != 0)
            int32_t rax_6 = *(rbx + 0xc)
            
            if (rax_6 s>= data_143e1d9b4)
                rax_10 = nullptr
            else
                uint32_t rdx_3 = zx.d(rax_6.w)
                
                if (rax_6 s< 0)
                    rax_6 += 0xffff
                    rdx_3 -= 0x10000
                
                rax_10 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
        
        if (rbx == 0 || ((*(rax_10 + 8) u>> 0x1d).b & 1) != 0)
            int32_t rcx_25 = arg1[0x5e].d
            int32_t rax_30 = rcx_25 - rsi
            
            if (rax_30 != 1)
                memmove(&r9_1[sx.q(rsi)], &r9_1[sx.q(r12_1)], (rax_30 - 1) << 3)
                rcx_25 = arg1[0x5e].d
            
            arg1[0x5e].d = rcx_25 - 1
            sub_1405c53d0(&arg1[0x5d])
            rsi -= 1
            r12_1 -= 1
            rbp_1 -= 8
        else
            int64_t var_50
            
            if (arg_18 != 0)
                if (sub_14094dfb0(&rbx[0x4a], *(arg2 + 0x228) + 0x250) != 0)
                    rdi.b = 1
                else
                    rdi.b = 0
            else if (rax_4 s<= 1)
                rdi.b = 0
            else
                uint64_t rdx_18 = &data_142d40450
                
                if (arg_20 != 0)
                    rdx_18 = rdi
                
                int16_t* const rcx_21
                
                if (rbx[0x49].d == 0)
                    rcx_21 = &data_142d40450
                else
                    rcx_21 = rbx[0x48]
                
                int32_t rax_26 = sub_140a54510(rcx_21, rdx_18)
                
                if (rax_26 != 0)
                    rdi.b = 0
                else
                    r15 |= 1
                    rdi = &data_142d40450
                    int32_t var_58
                    
                    if (var_58 != rax_26)
                        rdi = var_60
                    
                    int64_t* rax_27 = sub_1422a12b0(rbx, &var_50)
                    int16_t* const rcx_23
                    
                    if (rax_27[1].d == 0)
                        rcx_23 = &data_142d40450
                    else
                        rcx_23 = *rax_27
                    
                    if (sub_140a54510(rcx_23, rdi) != 0)
                        rdi.b = 0
                    else
                        rdi.b = 1
            
            if ((r15.b & 1) != 0)
                int64_t rcx_7 = var_50
                r15 &= 0xfffffffe
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
            
            if (rdi.b != 0)
                int64_t* rdi_1 = *(arg2 + 0x228)
                *(arg2 + 0x228) = rbx
                (*(*rbx + 0x440))(rbx, arg2)
                sub_141dd8f90(*(arg2 + 0x228), 1)
                int64_t* rcx_10 = *(arg2 + 0x228)
                int512_t zmm1_1
                zmm1_1.o = zx.o(0)
                (*(*rcx_10 + 0x390))(rcx_10, zmm1_1)
                (*(*arg1 + 0x8d8))(arg1, arg2, rdi_1)
                int64_t* rcx_12 = arg1[0x50]
                (*(*rcx_12 + 0x670))(rcx_12, *(arg2 + 0x228))
                int32_t rax_18 = arg1[0x5e].d
                int32_t rdx_12 = rax_18 - rsi
                
                if (rdx_12 != 1)
                    int64_t r9_2 = arg1[0x5d]
                    memmove(r9_2 + (sx.q(rsi) << 3), r9_2 + (sx.q(rsi + 1) << 3), (rdx_12 - 1) << 3)
                    rax_18 = arg1[0x5e].d
                
                arg1[0x5e].d = rax_18 - 1
                sub_1405c53d0(&arg1[0x5d])
                sub_1422ac900(rdi_1, 1)
                var_50.o = zx.o(0)
                (*(*rdi_1 + 0x698))(rdi_1, &var_50)
                int64_t* var_48
                
                if (var_48 != 0)
                    var_48[1].d -= 1
                    
                    if (var_48[1].d == 1)
                        (**var_48)(var_48)
                        int32_t temp3_1 = *(var_48 + 0xc)
                        *(var_48 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_48 + 8))(var_48, 1)
                
                sub_141dbe590(rdi_1, 0, 1)
                int64_t* rcx_20 = *(arg2 + 0x228)
                (*(*rcx_20 + 0x6c0))(rcx_20)
                rbx.b = 1
                break
        
        rsi += 1
        r12_1 += 1
        rbp_1 += 8
        
        if (rsi s>= arg1[0x5e].d)
            goto label_142026e58
        
        rdi = var_70

uint64_t rcx_27 = var_60

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

uint64_t rcx_28 = var_70

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

return zx.q(rbx.b)
