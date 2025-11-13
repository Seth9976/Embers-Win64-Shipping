// 函数: sub_14288ccc0
// 地址: 0x14288ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 0xa8)
int64_t r8 = *(rax + 0x3d0)
int64_t rcx = *(rax + 0x388)
int64_t rdx = rcx + r8

if (rdx != 0)
    if (rcx == 0)
        sub_142856580(arg1, 0x50, 0x1c0, 0x44, "ssl\statem\extensions_clnt.c", 0x4d3)
        return 0
    
    if (rdx != 0 && r8 == 0)
        sub_142856580(arg1, 0x50, 0x1c0, 0x44, "ssl\statem\extensions_clnt.c", 0x4d3)
        return 0

int64_t rdi = arg2[1]
int32_t var_10_1
int32_t rdx_1
int32_t r9_2

if (rdi == 0)
    var_10_1 = 0x4da
    rdx_1 = 0x32
    r9_2 = 0x150
else
    char* rax_2 = *arg2
    uint64_t rcx_2 = zx.q(*rax_2)
    *arg2 = &rax_2[1]
    arg2[1] = rdi - 1
    
    if (rdi - 1 == rcx_2)
        if (rcx_2 == rdx)
            int64_t rdx_2 = *(*(arg1 + 0xa8) + 0x388)
            int32_t rax_4
            void* rbp_1
            int64_t rdi_2
            void* buffer1
            
            if (rdi - 1 u>= rdx_2)
                buffer1 = &rax_2[1 + rdx_2]
                rdi_2 = rdi - 1 - rdx_2
                *arg2 = buffer1
                arg2[1] = rdi_2
                rbp_1 = *(arg1 + 0xa8)
                rax_4 = memcmp(&rax_2[1], rbp_1 + 0x348, *(rbp_1 + 0x388))
            
            int32_t var_10_2
            
            if (rdi - 1 u< rdx_2 || rax_4 != 0)
                var_10_2 = 0x4f0
            else
                int64_t rdx_4 = *(rbp_1 + 0x3d0)
                
                if (rdi_2 u>= rdx_4)
                    *arg2 = buffer1 + rdx_4
                    arg2[1] = rdi_2 - rdx_4
                    void* rdi_4 = *(arg1 + 0xa8)
                    
                    if (memcmp(buffer1, rdi_4 + 0x390, *(rdi_4 + 0x3d0)) == 0)
                        *(rdi_4 + 0x3d8) = 1
                        return 1
                
                var_10_2 = 0x4f8
            
            sub_142856580(arg1, 0x2f, 0x1c0, 0x151, "ssl\statem\extensions_clnt.c", var_10_2)
            return 0
        
        var_10_1 = 0x4e8
        rdx_1 = 0x2f
        r9_2 = 0x151
    else
        var_10_1 = 0x4e1
        rdx_1 = 0x32
        r9_2 = 0x150

sub_142856580(arg1, rdx_1, 0x1c0, r9_2, "ssl\statem\extensions_clnt.c", var_10_1)
return 0
