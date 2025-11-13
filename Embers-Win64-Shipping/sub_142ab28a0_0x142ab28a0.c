// 函数: sub_142ab28a0
// 地址: 0x142ab28a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a7db20(0x15, sub_142ab2b20)
struct icu_64::UnifiedCacheBase::icu_64::UnifiedCache::VTable** result = j_sub_142a7dd00(0x38)
struct icu_64::UnifiedCacheBase::icu_64::UnifiedCache::VTable** result_1 = result
struct icu_64::UnifiedCacheBase::icu_64::UnifiedCache::VTable** result_2

if (result == 0)
    result_2 = nullptr
else
    result = sub_142ab1e20(result, arg1)
    result_2 = result

data_144016080 = result_2

if (result_2 == 0)
    *arg1 = 7
    data_144016080 = result_2
    return result

if (*arg1 s> 0)
    result = (*result_2)->__offset(0x0).q(result_2, 1)
    data_144016080 = 0

return result
