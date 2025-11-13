// 函数: sub_141064630
// 地址: 0x141064630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg2 + 0x148)

if (rdi == 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rsi = *rdi
wchar16 const* const r9

if (rsi != 0)
    r9 = u"End: "
    
    if (rdi[1] u> 0)
        r9 = u"Begin: "
else
    r9 = u"No Data"

int32_t rcx = *(arg2 + 0xf4)
wchar16 const* const r8

if (rcx == 0)
    r8 = &data_142f02ea8
else if (rcx == 1)
    r8 = u"Copy"
else if (rcx == 2)
    r8 = u"Compute"
else
    r8 = nullptr

wchar16 const* const var_28 = r9
*(arg2 + 0x20)
int64_t var_18
sub_140a2e390(&var_18, u"[GPUBreadCrumb]\t%s Queue %d - %s", r8)
int32_t rbx = 0

if (rsi != 0)
    void* rdi_1 = &rdi[2]
    
    do
        if (rbx != 0)
            sub_140a20ba0(&var_18, &data_142e51dc8, 3)
        
        void* rax_2 = sub_14104b8d0(arg1, *rdi_1)
        wchar16 const* const rdx_1
        int32_t r8_1
        
        if (rax_2 == 0)
            rdx_1 = u"Unknown Event"
            r8_1 = 0xd
        else
            int32_t rcx_5 = *(rax_2 + 8)
            rdx_1 = *rax_2
            r8_1 = rcx_5 - 1
            
            if (rcx_5 == 0)
                r8_1 = 0
        
        sub_140a20ba0(&var_18, rdx_1, r8_1)
        rbx += 1
        rdi_1 += 4
    while (rbx u< rsi)

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rax_1
rax_1.b = 1
return rax_1
