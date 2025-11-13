// 函数: sub_142c89f50
// 地址: 0x142c89f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0xd0)
int32_t r13 = *(arg2 + 0xd8)
int32_t r14 = 1
int32_t result_1 = 0
char* rax_1 = data_143ccb898(0x4000)
uint64_t result

if (rax_1 != 0)
    while (true)
        *(arg2 + 0xe0) = rax_1
        *(arg2 + 0xe8) = 0x4000
        int32_t rax_2 = sub_140371df0(arg2 + 0xd0, 2)
        
        if (rax_2 u<= 1)
            r14 = 0
            int32_t result_2
            
            if (0x4000 != *(arg2 + 0xe8) && *(arg2 + 0x14d) == 0)
                result_2, arg3 = sub_142c645e0(arg1, 1, rax_1, zx.q(0x4000 - *(arg2 + 0xe8)), arg3)
                result_1 = result_2
            
            if (0x4000 != *(arg2 + 0xe8) && *(arg2 + 0x14d) == 0 && result_2 != 0)
                data_143ccb8a0(rax_1)
            label_142c8a0c3:
                sub_140374100(arg2 + 0xd0)
                result = zx.q(result_1)
                *(arg2 + 0xcc) = 0
                break
            
            if (rax_2 == 1)
                data_143ccb8a0(rax_1)
                
                if (sub_140374100(arg2 + 0xd0) == 0)
                    goto label_142c8a0c3
            else
                if (*(arg2 + 0xd8) != 0)
                    continue
                
                data_143ccb8a0(rax_1)
                return zx.q(result_1)
            
            int64_t r8_3 = *(arg2 + 0xf0)
            void* rcx_13 = *arg1
            
            if (r8_3 == 0)
                sub_142c64760(rcx_13, 
                    "Error while processing content unencoding: Unknown failure within decompression "
                "software.", 
                    r8_3, arg3)
            else
                sub_142c64760(rcx_13, "Error while processing content unencoding: %s", r8_3, arg3)
            
            sub_140374100(arg2 + 0xd0)
            *(arg2 + 0xcc) = 0
        else
            if (r14 != 0 && rax_2 == 0xfffffffd)
                sub_140374100(arg2 + 0xd0)
                
                if (sub_140371b70(arg2 + 0xd0, rax_2 - 0xc, "1.2.8", rax_2 + 0x5b) == 0)
                    r14 = 0
                    *(arg2 + 0xd0) = rax
                    *(arg2 + 0xd8) = r13
                    continue
            
            data_143ccb8a0(rax_1)
            int64_t r8_2 = *(arg2 + 0xf0)
            void* rcx_7 = *arg1
            
            if (r8_2 == 0)
                sub_142c64760(rcx_7, 
                    "Error while processing content unencoding: Unknown failure within decompression "
                "software.", 
                    r8_2, arg3)
            else
                sub_142c64760(rcx_7, "Error while processing content unencoding: %s", r8_2, arg3)
            
            sub_140374100(arg2 + 0xd0)
            *(arg2 + 0xcc) = 0
        
        return 0x3d
else
    sub_140374100(arg2 + 0xd0)
    result = zx.q((&rax_1[0x1b]).d)
    *(arg2 + 0xcc) = 0

return result
