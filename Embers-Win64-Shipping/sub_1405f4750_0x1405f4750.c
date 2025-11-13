// 函数: sub_1405f4750
// 地址: 0x1405f4750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
CRITICAL_SECTION* arg_20 = arg1 + 0xa0
EnterCriticalSection(arg1 + 0xa0)

if (*(arg1 + 0xe8) == 0)
    *arg2 = 0
else if (*(arg1 + 0x148) != 0xffffffff || *(arg1 + 0x14c) != 0xffffffff
        || *(arg1 + 0x150) != 0xffffffff || *(arg1 + 0x154) != 0xffffffff)
    int64_t* ppTopo = nullptr
    
    if (MFCreateTopology(&ppTopo) s>= 0)
        uint64_t r14
        r14.b = 0
        *(arg1 + 0x159) = 0
        int64_t rax_3 = sx.q(*(arg1 + 0x148))
        
        if (rax_3.d s>= 0 && rax_3.d s< *(arg1 + 0x58))
            r14 = zx.q(sub_1405f0cb0(arg1, rax_3 * 0x68 + *(arg1 + 0x50), ppTopo))
        
        int64_t rax_5 = sx.q(*(arg1 + 0x14c))
        
        if (rax_5.d s>= 0 && rax_5.d s< *(arg1 + 0x98))
            r14.b |= sub_1405f0cb0(arg1, rax_5 * 0x68 + *(arg1 + 0x90), ppTopo)
        
        int64_t rax_7 = sx.q(*(arg1 + 0x150))
        
        if (rax_7.d s>= 0 && rax_7.d s< *(arg1 + 0x138))
            r14.b |= sub_1405f0cb0(arg1, rax_7 * 0x68 + *(arg1 + 0x130), ppTopo)
        
        int64_t rax_9 = sx.q(*(arg1 + 0x154))
        
        if (rax_9.d s>= 0 && rax_9.d s< *(arg1 + 0x1b8))
            r14.b |= sub_1405f0cb0(arg1, rax_9 * 0x68 + *(arg1 + 0x1b0), ppTopo)
        
        if (r14.b != 0)
            int64_t* rax_12 = sub_14060a8e0()
            void* rax_13 = rax_12[0x23]
            
            if (rax_13 == 0)
                int64_t rdx_8 = *rax_12
                (*(rdx_8 + 0x390))(rax_12, rdx_8)
                rax_13 = rax_12[0x23]
            
            if (*(rax_13 + 0x2b) != 0)
                void arg_8
                char rax_14 = sub_1405f5550(&arg_8, &ppTopo)
                
                if (rax_14 != 0 || *(arg1 + 0x159) != rax_14)
                    rax_14 = 1
                
                void* const r8_5 = &data_142d5f5d0
                
                if (rax_14 != 0)
                    r8_5 = &data_142d5f5c8
                
                int64_t var_40
                sub_140a2e390(&var_40, u"Video decoded on %s\n", r8_5)
                int32_t var_38
                int32_t r8_6 = var_38 - 1
                
                if (var_38 == 0)
                    r8_6 = 0
                
                sub_140a20ba0(arg1 + 0xc8, var_40, r8_6)
                int64_t rcx_10 = var_40
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
            
            *arg2 = ppTopo
            ppTopo = nullptr
        else
            *arg2 = 0
            int64_t* ppTopo_2 = ppTopo
            
            if (ppTopo_2 != 0)
                (*(*ppTopo_2 + 0x10))(ppTopo_2)
    else
        *arg2 = 0
        int64_t* ppTopo_1 = ppTopo
        
        if (ppTopo_1 != 0)
            (*(*ppTopo_1 + 0x10))(ppTopo_1)
else
    *arg2 = 0

if (arg1 != -0xa0)
    LeaveCriticalSection(arg1 + 0xa0)

return arg2
