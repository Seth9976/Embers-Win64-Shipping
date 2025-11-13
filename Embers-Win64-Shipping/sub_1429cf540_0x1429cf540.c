// 函数: sub_1429cf540
// 地址: 0x1429cf540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int32_t* rsi = **(arg1 + 0x28)
int32_t r14 = rsi[2]
uint64_t r9 = zx.q(*rsi)
int64_t result
int64_t entry_r8

if (r14 == 0)
    sub_1429ced00(r14 + 4, 
        "Failure in TopologyRefinerFactory<>::Create() -- mesh contains no vertices.", entry_r8)
    result.b = 0
else if (r9.d != 0)
    int32_t rax_3 = rsi[5]
    
    if (rax_3 s<= 0xffff)
        int64_t r8_1 = *(rsi + 0x18)
        uint32_t rcx_3 = (r9 * 2).d
        int64_t rcx_4 = sx.q(rcx_3 - 1)
        int32_t r10_1 = *(r8_1 + (sx.q(rcx_3 - 2) << 2))
        int32_t r10_2 = r10_1 + *(r8_1 + (rcx_4 << 2))
        
        if (r10_1 == neg.d(*(r8_1 + (rcx_4 << 2))))
            sub_1429ced00(r10_2 + 4, 
                "Failure in TopologyRefinerFactory<>::Create() -- mesh contains no face-vertices.", 
                r8_1)
            result.b = 0
        else if (*arg1 != 2 || r10_2 == (r9 * 3).d)
            sub_14058d4e0(&rsi[0xc], sx.q(r10_2))
            int32_t rdi_1 = rsi[1]
            
            if (rdi_1 s> 0)
                sub_14058d4e0(&rsi[0x12], sx.q(((*(rsi + 0x38) - *(rsi + 0x30)) s>> 2).d))
                sub_14058d4e0(&rsi[0x1e], sx.q(rsi[1] * 2))
                int64_t r8_2 = *(rsi + 0x90)
                int32_t rcx_9 = rdi_1 * 2
                sub_1429cf840(rsi, 
                    *(r8_2 + (sx.q(rcx_9 - 2) << 2)) + *(r8_2 + (sx.q(rcx_9 - 1) << 2)))
                int64_t r9_2 = *(rsi + 0x108)
                int32_t r8_3 = r14 * 2
                int64_t rdi_2 = sx.q(r8_3 - 2) << 2
                int64_t rbx_1 = sx.q(r8_3 - 1) << 2
                sub_1429cf8c0(rsi, *(rbx_1 + r9_2) + *(rdi_2 + r9_2))
                int64_t rax_16 = *(rsi + 0x150)
                sub_1429cf880(rsi, *(rbx_1 + rax_16) + *(rdi_2 + rax_16))
            
            result.b = 1
        else
            sub_1429ced00(4, 
                "Failure in TopologyRefinerFactory<>::Create() -- non-triangular faces not supported by "
            "Loop scheme.", 
                r8_1)
            result.b = 0
    else
        int32_t var_428_1 = 0xffff
        char var_418[0x400]
        sub_1429ced00(4, &var_418, 
            _snscanf(&var_418, 0x400, 
                "Failure in TopologyRefinerFactory<>::Create() -- face with %d vertices > %d max.", 
                zx.q(rax_3)))
        result.b = 0
else
    sub_1429ced00((r9 + 4).d, 
        "Failure in TopologyRefinerFactory<>::Create() -- meshes without faces not yet supported.", 
        entry_r8)
    result.b = 0
__security_check_cookie(rax_1 ^ &var_448)
return result
