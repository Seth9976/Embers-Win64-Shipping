// 函数: ?do_wait@@YAHPEAU_Cnd_internal_imp_t@@PEAU_Mtx_internal_imp_t@@PEBUxtime@@@Z
// 地址: 0x1427c8890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint64_t rbp = zx.q(arg6)

if (arg2 == 0)
    _wassert(mdDevice != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", (arg2 + 0x22).d)

if (arg3 == 0)
    _wassert(mdConcurrentGroup != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", (arg3 + 0x23).d)

if (arg4 == 0)
    _wassert(mdMetricSet != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", (arg4 + 0x24).d)

if (arg5 == 0)
    _wassert(d3dDevice != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", (arg5 + 0x25).d)

if (rbp.d == 0)
    _wassert(numRangesToAllocate != 0", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", (rbp + 0x26).d)

int64_t rax_2 = 8 * rbp

if (mulu.dp.q(8, rbp) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t result = j_sub_140a82f30(rax_2)
arg1[3] = result

if (result != 0)
    memset(result, 0, rbp << 3)
    *arg1 = arg2
    arg1[1] = arg3
    arg1[2] = arg4
    char rax_3 = sub_1427c7830(arg2, 1, 1, 0)
    arg1[8].b = rax_3
    int32_t rax_5
    
    if (rax_3 != 0)
        rax_5 = (*(*arg4 + 0x40))(arg4, 8)
    
    if (rax_3 != 0 && rax_5 != 0)
        sub_1427c8600(arg1)
        result.b = 0
    else
        void* rax_7 = (*(*arg4 + 8))(arg4)
        
        if (rax_7 == 0)
            _wassert(metricSetParams != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
            "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 
                (rax_7 + 0x41).d)
        
        int32_t r12_1 = *(rax_7 + 0x38)
        int64_t* rcx_5 = arg1[2]
        int32_t r13_1 = *(rax_7 + 0x3c)
        int32_t var_58_1 = *(rax_7 + 0x1c)
        int32_t rax_8
        rax_8.b = r12_1 != 0
        *(arg1 + 0x41) = rax_8.b
        
        if ((*(*rcx_5 + 0x28))(rcx_5) != 0)
            sub_1427c8600(arg1)
            result.b = 0
        else
            int32_t rdi_2 = 0
            
            if (rbp.d == 0)
            label_1427c8acc:
                int64_t* rcx_10 = arg1[2]
                (*(*rcx_10 + 0x30))(rcx_10)
                sub_1427c8030(&arg1[4], arg4, rbp.d, 0)
                sub_1427c8110(&arg1[6], arg4, rbp.d)
                result.b = 1
            else
                int64_t* rsi_1 = nullptr
                
                while (true)
                    int64_t var_50
                    int64_t* rdx = &var_50
                    int64_t r9 = *arg5
                    int64_t r8_7 = arg1[3] + (zx.q(rdi_2) << 3)
                    var_50 = 0
                    
                    if (r12_1 != 0)
                        var_50.d = r12_1
                        (*(r9 + 0xc0))(arg5, rdx, r8_7, r9, var_58_1, var_50, rax_1)
                    else
                        var_50.d = r13_1
                        (*(r9 + 0xd0))(arg5, rdx, r8_7, r9, var_58_1, var_50, rax_1)
                    
                    int64_t* rcx_8 = *(rsi_1 + arg1[3])
                    
                    if (rcx_8 == 0)
                        int64_t* rcx_15 = arg1[2]
                        (*(*rcx_15 + 0x30))(rcx_15)
                        break
                    
                    int32_t rax_14 = (*(*rcx_8 + 0x38))(rcx_8)
                    int32_t rcx_9 = 8
                    
                    if (*(arg1 + 0x41) != 0)
                        rcx_9 = var_58_1
                    
                    if (rcx_9 != rax_14)
                        _wassert(expectedDataSize == dataSize", c:\dev\dev-rendering\engine\source\t"
                        "hirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\r"
                        "ange_metrics_dx11.cpp", 0x63)
                    
                    rdi_2 += 1
                    rsi_1 = &rsi_1[1]
                    
                    if (rdi_2 u>= rbp.d)
                        goto label_1427c8acc
                
                sub_1427c8600(arg1)
                result.b = 0

__security_check_cookie(rax_1 ^ &var_78)
return result
