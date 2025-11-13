// 函数: sub_142377ad0
// 地址: 0x142377ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2ff20 == arg1)
    return 

void var_48
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_48)
sub_141e75650(&var_48)
sub_141e8d480(&var_48)
bool cond:1_1 = data_143f5b298 == 0
data_143a2ff20 = arg1

if (not(cond:1_1))
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    int32_t var_28_1 = 0xffffffff
    sub_140d3cc80(sub_14259f000(), &var_38, 1, 0x10, 0)
    int32_t r8_2 = var_30_1
    int64_t rdx_3 = var_38
    int32_t rcx_4 = var_28_1 + 1
    int32_t var_28_2 = rcx_4
    uint64_t rax_2
    
    if (rcx_4 s< r8_2)
        while (*(rdx_3 + (sx.q(rcx_4) << 3)) == 0)
            rax_2 = zx.q(rcx_4 + 1)
            var_28_2 = rax_2.d
            rcx_4 = rax_2.d
            
            if (rax_2.d s>= r8_2)
                break
    
    while (true)
        if (rcx_4 s< 0 || rcx_4 s>= r8_2)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        if (rax_2.b == 0)
            break
        
        int64_t* var_58 = nullptr
        int64_t var_50_1 = 1
        void* r15_1 = *(rdx_3 + (sx.q(rcx_4) << 3))
        sub_1405a4d70(&var_58)
        int64_t* r14_1 = var_58
        int32_t i = var_50_1.d
        *r14_1 = *(r15_1 + 0x168)
        
        while (i s> 0)
            int64_t* rdi_1 = r14_1[sx.q(i - 1)]
            
            if (0 != 0)
                memmove(&r14_1[sx.q(i - 1)], &r14_1[sx.q(i)], 0 << 3)
            
            i -= 1
            var_50_1.d = i
            
            if (rdi_1 != 0)
                void* rax_8 = sub_14259e570()
                void* rcx_8 = rdi_1[2]
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> *(rcx_8 + 0x38) || *(*(rcx_8 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                    int64_t rsi_2 = sx.q(rdi_1[6].d)
                    
                    if (rsi_2.d != 0)
                        int32_t rdx_7 = i + rsi_2.d
                        
                        if (rdx_7 s> var_50_1:4.d)
                            sub_1405c5570(&var_58, rdx_7)
                            i = var_50_1.d
                            r14_1 = var_58
                        
                        memcpy(&r14_1[sx.q(i)], rdi_1[5], (rsi_2 << 3).d)
                        i += rsi_2.d
                else
                    (*(*rdi_1 + 0x2f8))(rdi_1, rax_9)
        
        sub_142360710(r15_1, 0)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        r8_2 = var_30_1
        rdx_3 = var_38
        rcx_4 = var_28_2 + 1
        var_28_2 = rcx_4
        
        if (rcx_4 s< r8_2)
            while (*(rdx_3 + (sx.q(rcx_4) << 3)) == 0)
                rax_2 = zx.q(rcx_4 + 1)
                var_28_2 = rax_2.d
                rcx_4 = rax_2.d
                
                if (rax_2.d s>= r8_2)
                    break
    
    if (rdx_3 != 0)
        sub_140a74f90(rdx_3)

sub_141e71c70(&var_48)
